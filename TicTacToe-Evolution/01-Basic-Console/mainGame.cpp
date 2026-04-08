#include<iostream>
#include "./gameLogic.h"
using namespace std;


bool isXturn=false; //// golobal

void board(char arr[][3],int n){

    if(isXturn){
     cout<<"\nX turn\n\n";
    } else{
     cout<<"\nO turn\n\n";
    }

  for(int i=0;i<n;i++){

    cout<<"\n\t -------------------------\n";
    for(int j=0;j<n;j++){
      cout<<"\t |   "<<arr[i][j];
    } 
  }
    cout<<"\n\t -------------------------\n";
  cout<<"\n\n\t 1 2 3 \n \t 4 5 6 \n  \t 7 8 9 \n";
  cout<<"\t  choose in this pattern:";

}



bool Placing(char *arr,int key,char currentPlayer,int remaningMoves){
  /*
     1 2 3 
     4 5 6 
     7 8 9 
  */
  if(*(arr+key-1)==' '){ /// for no alternate or double change of value
     *(arr+key-1)= currentPlayer;
     --remaningMoves;
     return true;
  }
    return false;

}

int main(){
////////////   VARS 
///
int remaningMoves=9;
bool winner = false;
bool isGameOver=false;
///
////////////   VARS 

  // char arr[3][3]={'1','2','3','4','5','6','7','8','9'};
  char arr[3][3]={
    {' ',' ',' '},
    {' ',' ',' '},
    {' ',' ',' '}
  };

  enum player{X='X',O='O'};

  char currentPlayer=X;  

  int position;
////////////////////     GAME LOOP ///////////

  //// coloring 
  system("color 5f");
  while(!isGameOver){
    system("cls");
    currentPlayer = (isXturn)?X:O; // player changinglogic

    board(arr, 3);
    cout<<endl;
    cin>>position;

    if(position>0 && position<=9)
      if(Placing(&arr[0][0],position,currentPlayer,remaningMoves) && !winner){
        if(checkWin(arr, currentPlayer)){
          winner = true;
          isGameOver=true;
        }
        isXturn = !isXturn;
      }
    if(remaningMoves==0){
      isGameOver = true;
    }
  }
  system("cls && color a");
  board(arr, 3);
  ////////////////////   END OF  GAME LOOP ///////////
  //// display board 
    std::string winnerText = getWinner(winner, currentPlayer); 
    std::cout<<"\n\n"<<winnerText;
  return 0;
}
