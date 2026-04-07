#include <cstdlib>
#include<iostream>
#include "./Board.h"

int main(){
  //// VARIABLES 
  bool isGameOver=false;
  enum player{X='X',O='O'};
  player currentPlayer=X;
  int position; 
  char board[3][3]={
    {' ',' ',' '},
    {' ',' ',' '},
    {' ',' ',' '}
  };


  while(!isGameOver){

    displayTurn(currentPlayer);

    displayBoard(board);

    position = takeInput();
  // 👉 place move here using currentPlayer

    currentPlayer = (currentPlayer==X)?O:X;

    std::cout<<position;
    system("cls");
  } 
}
