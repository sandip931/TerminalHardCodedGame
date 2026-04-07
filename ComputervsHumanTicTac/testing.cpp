#include<iostream>
char giveOut(char (*arr)[3],int key){
  char *ref;
  // int out ;
  ref=&arr[0][0];  

  return *(ref+key-1);
} 
int main(){
  char arr[3][3]{
    {'a','b','c'},
    {'d','e','f'},
    {'g','h','i'}
  };
  /*
  1 2 3   
  4 5 6 
  7 8 9
  */

  int key = 5;
  std::cout<<giveOut(arr,key);
  return 0;
}
//// IDEA =  making the class with constructor that takes two args one the 2d array and other the total number of that array
/// eg linear x = tolinear(arr,2*3);
/// met
