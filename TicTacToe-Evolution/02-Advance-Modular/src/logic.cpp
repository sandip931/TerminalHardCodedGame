// #include "./logic.h"
#include "../include/logic.h"
#include<string>



Log getStatusMsg(int move){
  Log moveLog;
  if(move==-1){
    moveLog.status = "Invalid input enter number between  1-9!\n";
    moveLog.colorCommand="color c";
  }
  else if (move==-2) {
    moveLog.status = "That spot is already taken \n";
    moveLog.colorCommand="color c";
  }
  else{
    moveLog.status = "Nice Move!\n";
    moveLog.colorCommand = "color a";
  }
  return moveLog;
}

bool checkWinner(char (*board)[3],char currentPlayer){

  for(int i=0;i<3;i++){
    // for rows && cols 
    if( (board[i][0]==currentPlayer && board[i][1]==currentPlayer && board[i][2]==currentPlayer) ||
        (board[0][i]==currentPlayer && board[1][i]==currentPlayer && board[2][i]==currentPlayer) ) 
      return true;//// success
  }

  // for diagonal check 
  if( (board[0][0]==currentPlayer && board[1][1]==currentPlayer && board[2][2]==currentPlayer) ||
      (board[0][2]==currentPlayer && board[1][1]==currentPlayer && board[2][0]==currentPlayer) )
    return true;

  return false ;
}


