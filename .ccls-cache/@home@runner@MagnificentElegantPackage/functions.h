#ifndef FUNCTIONS_h
#define FUNCTIONS_h
//
#include <iostream>

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>



using namespace std;


int BaseRoll();
int PRoll();     // note shove the main functions into here, as they need to be //defined in .h BEFORE being used in the main.cpp

////  need parser program thing

class DStu{
public:
  int number;
  int faces;
};   // note You can shove stuff into .h and you can use it anywhere. Nice

#endif
