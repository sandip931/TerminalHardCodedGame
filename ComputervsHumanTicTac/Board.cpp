#include "Board.h"

#include<iostream>
using std::cout;
using std::cin;


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

int takeInput(char (*board)[3]){
   int key;
   cout<<"\nEnter your Your move:";
   cin>>key;
   if(cin.fail()){
     cin.clear(); // clear stream
     cin.ignore(1000,'\n'); // skip / ignore 1000 characters and until linebreak
     cout<<"invalidInput";
   }
   else if (key<0 && key>9){
     cout<<"Invalid input enter number between  1-9!\n";
   }
   else{
    char *linArr = *board;  ////// testing ``

   }

   return key;
}

void displayTurn(char currentPlayer){
  cout<<"\n\n"<<currentPlayer<<"'s  TURN \n\n";
};