#include "../include/Board.h"
#include<iostream>

using std::cout;
using std::cin;
#define INVALID_MOVE -1 // number out of bound / char input err 
#define SPOT_TAKEN -2    // repeaded move err  


void displayBoard(char (*board)[3]){
  std::cout<<"------------------------\n";
  for(int rows =0;rows<3;rows++){
    for(int cols =0;cols<3;cols++){
      std::cout<<"|\t"<<board[rows][cols];
    }
    std::cout<<"|"<<std::endl;
  }

  cout<<"\nEnter in this format : \n";
  cout<<"\n1 2 3";
  cout<<"\n4 5 6";
  cout<<"\n7 8 9\n";
}

void displayTurn(char currentPlayer){
  cout<<"\n\n"<<currentPlayer<<"'s  TURN \n\n";
};

int takeInput(char (*board)[3],char currentPlayer){
  int key;
  cout<<"\nEnter your Your move:";
  cin>>key;
  if(cin.fail()){
    cin.clear(); // clear stream
    cin.ignore(1000,'\n'); // skip / ignore 1000 characters and until linebreak
    return INVALID_MOVE;
  }
  else if (key<1 || key>9){
    return INVALID_MOVE; /// error code 
  }
  else{
    char *linArr = &board[0][0];

    if(linArr[key-1]=='X'|| linArr[key-1]=='O'){
      return SPOT_TAKEN; /// error code 
    }
    else{
      linArr[key-1] = currentPlayer;
      return 1; // success
    }
  }
  return key;
}

void clearBoard(char (*board)[3]){
  char *linArr = &board[0][0];
  for (int i =0;i<9;i++){
    linArr[i]= ' ';
  }

}


