#include"gameLogic.h"
#include<iostream>
#include <string>
//   const int totalWinPattern = 8;
//   int WINNING_ROWS[totalWinPattern][3] = { 
//     {0, 1, 2},
//     {3, 4, 5},
//     {6, 7, 8},
//     {0, 3, 6},
//     {1, 4, 7},
//     {2, 5, 8},
//     {0, 4, 8},
//     {2, 4, 6} 
//   };

bool checkWin(char board[3][3],char currentPlayer){
  //////////// for rows 

  for(int i =0;i<3;i++){

    if( board[i][0]==currentPlayer && 
        board[i][1]==currentPlayer &&
        board[i][2]==currentPlayer){
      return true;
    }

    /////////// for cols 
    if( board[0][i]==currentPlayer && 
        board[1][i]==currentPlayer &&
        board[2][i]==currentPlayer){
      return true;
    }

  }


  ///////// diagonals
  if( board[0][0]==currentPlayer && 
      board[1][1]==currentPlayer &&
      board[2][2]==currentPlayer){
    return true;

  }

  if( board[0][2]==currentPlayer && 
      board[1][1]==currentPlayer &&
      board[2][0]==currentPlayer){
    return true;
  }

  return false;
}


std::string getWinner (bool winner,char currentPlayer){
  std::string winMsg = "";
    if(winner){
     winMsg = "\nthe winner is " + std::string(1,currentPlayer); 
    }
    else{
      winMsg = "\nThere is no winner!\n out of moves ";
    }
    return winMsg;
}
 
