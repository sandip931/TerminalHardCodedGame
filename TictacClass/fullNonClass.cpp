#include<iostream>
using namespace std;

bool isGameOver=false;
bool X_turn=false; //// golobal
int Moves=9;

void board(char arr[][3],int n){

    if(X_turn){
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
  cout<<"\n\n\t 1 2 3 \n \t 4 5 6 \n  \t 7 8 9 \n";
  cout<<"\t  choose in this pattern:";

}





bool Placing(char *arr,int key,char currentPlayer){
  /*
     1 2 3 
     4 5 6 
     7 8 9 
  */
  if(*(arr+key-1)==' '){ /// for no alternate or double change of value
     *(arr+key-1)= currentPlayer;
     --Moves;
     return true;
  }
    return false;

}

int main(){
  // char arr[3][3]={'1','2','3','4','5','6','7','8','9'};
  char arr[3][3]={
    {' ',' ',' '},
    {' ',' ',' '},
    {' ',' ',' '}
  };
  enum player{X='X',O='O'};
  char currentPlayer=X;  
  int position;

  while(!isGameOver){
    system("cls");

    currentPlayer = (X_turn)?X:O;

    board(arr, 3);
    cout<<endl;
    cin>>position;

    if(position>0 && position<=9)
      if(Placing(&arr[0][0],position,currentPlayer)){
        X_turn = !X_turn;
      }
    if(Moves==0){
      isGameOver = true;
    }

  }

  board(arr,3);
  return 0;
}
