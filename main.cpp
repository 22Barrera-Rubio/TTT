#include <iostream>
#include "functions.h"
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


Plan for this :
Has small option menu. This menu leads to the different functions, these functions are stored in the seperate .cpp files. 
------
list of possible
/-Roll and add total (done)
/-Roll and check how many rolls are above a threshold (DONE)
X-Allow inputting data to a type of character list that you can change and access from menu (using classes that you can edit / dynamic or something ?) () running into issue of segmentation fault (core dumped), preventing it from running. Attempted to see what issue was by replacing with DSTU class object, still no work.

-Puzzle thing where one inputs a string and that string gets changed to 
follow specific ciphers or something, like rot13 but you can set the {13} or something. Already have a similar thing in other old project, for base ()
-Random Number picker, between minimum and maximum ()  free(): invalid pointer
signal: aborted (core dumped)   Error's present in this, to fix. Seems to be similar to the charclass one
-Coin flip, randomly picks between one and two and says heads if one tail if two
*/



int start(){
cout << "::::Table Top Tools::::" << endl;
//cout << "Enter '-1' or 'STOP' to exit programs" << endl;
cout<< endl;
cout << "1.Roll and add" << endl;
cout << "2.Roll with threshold" << endl;
cout << "3.Character Information"<<endl;
cout << "4. Random number" << endl;
cout << endl;     

int choice{};
cin >> choice;

if (choice == 1){
   BaseRoll();
  return 0;
}
if (choice == 2){
//cout << "\rUnable to do so at the moment    " << endl;
   PRoll();    
 return 0;
}
  if (choice == 3){
    CharRun();
  }
  if (choice == 4){
    numberer();
  }
else{
  cout << "\rNot supported at all         " << endl;
  start();
}
}
int main(){
start();
}
