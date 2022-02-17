#include <iostream>
#include "functions.h"
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


Plan for this :
Has small option menu. This menu leads to the different functions, these functions are stored in the seperate .cpp files. 





*/




int start(){
cout << "::::Table Top Tools::::" << endl;
cout << "Enter '-1' or 'STOP' to exit programs" << endl;
cout<< endl;
cout << "1.Roll and add" << endl;
cout << "2. not present" << endl;
cout << endl;

int choice{};
cin >> choice;

if (choice == 1){


   BaseRoll();
  return 0;
}
if (choice == 2){
cout << "\rUnable to do so at the moment    ";
start();
}
else{
  cout << "\rNot supported at all        ";
  start();
}


}


int main(){
start();
}
// to fix menu thing, choice not working