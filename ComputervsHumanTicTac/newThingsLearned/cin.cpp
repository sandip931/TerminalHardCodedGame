#include<iostream>
using namespace std;
int main(){
  //// cin has other methods like : 
  ///cin.fail(); /// returns bollean value 
  ///cin.ignore(); // ignore certain characters
  // cin.ignore(count, delimiter);
  ///
  bool isRunning=true;
  int x;
  //////// without using cin.fail, cin.ignore();
  while(isRunning){
    cout<<"here if you enter char it will infinite loop\n";
    cout<<"enter only numbers:(9=exit)";

    cin>>x; // error if the number is char 
            // if char is given then infinite 
            // loop is invoked without cin taking input 
    if(x==9){
      isRunning=false;
    }
  }
  
  //// with using cin.fail(), cin.ignore(); 
  while(!isRunning){
    if(cin.fail()){ // check if the input was not integer ? 
      cin.clear();////  clears the err flag on the input stream;
      cin.ignore(1000,'\n'); // ignore until 1000 char or until new line 
                         //// fulush the rest of the line 
      cout<<"\nwrong type of input , enter integer number withing limits\n";
    }
  }
  return 0;
}


    // if(cin.fail()){
    //   cin.clear();
    //   cin.ignore(1000, '\n');
    //   cout << "Invalid input! Enter a number (1-9).\n";
    // } else if(key < 1 || key > 9){
    //   cout << "Enter a number between 1 and 9.\n";
    // } else {
    //   return key;
    // }
  // }
