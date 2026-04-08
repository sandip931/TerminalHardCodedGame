#include <cstdlib>
#include<iostream>
#include <string>
// #include "./Board.h"
// #include "./logic.h"
#include "../include/Board.h"
#include "../include/logic.h" 

#define SUCCESS 1

void setup(){
  system("cls");
}

int main(){
  /*------------------VARIABLES-----------------*/ 
  bool isGameOver=false;
  Log currentLog;  /// err / status message 
  currentLog.status = "";
  enum player{X='X',O='O'};
  player currentPlayer=X;
  int moveStatus; // returns status code   
  int moveCount=0;

  bool isWin,isDraw;
  char playAgain;

  char board[3][3]={
    {' ',' ',' '},
    {' ',' ',' '},
    {' ',' ',' '}
  };

  /*------------------VARIABLES-----------------*/ 


  /*------------------------------------MAINLOOP----------------------------------*/

  while(!isGameOver){
    system("cls");

  /*---------------------- Display board section -------*/
    displayTurn(currentPlayer);
    displayBoard(board);

    std::cout << currentLog.status;
    system(currentLog.colorCommand.c_str());
    

    /*------------------INPUT AND RETURN ERRMSGS -------*/
    moveStatus = takeInput(board,currentPlayer); // updateMove + giveStatusCode
    currentLog  = getStatusMsg(moveStatus);

    /*----------------- LOGIC / WINNER /DRAW -------*/
    if(moveStatus == SUCCESS){ 

      moveCount++;
      isWin = checkWinner(board, currentPlayer);
      isDraw = (moveCount==9);

      if(isWin||isDraw){

        isGameOver=true;

        system("cls");
        displayBoard(board);

        if(isWin){
          system("color d");
          std::cout<<"\n\nCONGRULATION : \n PLAYER "<<std::string(1,currentPlayer)<<" WINS !!!";
        }
        else{
          system("color e");
          std::cout<<"\n\nIts a Draw!  \n";
        }

        std::cout<<"Do you want to play again (y)?";
        std::cin>>playAgain;
        isGameOver = (playAgain!='y');
        if(!isGameOver){
         clearBoard(board); 
         moveCount=0;
        }
        
      }

      currentPlayer = (currentPlayer==X)?O:X;
    }
  } 
  /*---------------------------------END MAINLOOP----------------------------------*/
  return 0;
}
