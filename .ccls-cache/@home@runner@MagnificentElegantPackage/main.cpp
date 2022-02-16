#include <iostream>
#include "functions.h"
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


Plan for this :
Has small option menu. This menu leads to the different functions, these functions are stored in the seperate .cpp files. 





*/


int main(){

cout << "1.Roll and add" << endl;
cout << "2. not present" << endl;
int choice{};
cin >> choice;

if (choice = 1){


   BaseRoll();
  return 0;
}
if (choice = 2){
cout << "Unable to do so at the moment";
return 0;
}
else{
  cout << "Not supported at all";
  return 0;
}


}
// to fix menu thing, choice not working