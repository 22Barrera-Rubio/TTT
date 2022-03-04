#ifndef FUNCTIONS_h
#define FUNCTIONS_h
//
#include <iostream>

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>



using namespace std;


int BaseRoll();
int PRoll(); 
int CharRun();
int editor();
int numberer();
// note shove the main functions into here, as they need to be //defined in .h BEFORE being used in the main.cpp

////  need parser program thing

class DStu{
public:
  int number;
  int faces;
};   
class Charac{
public:
  string name;
  int hp;
  int mp;
}; 
class Numie{
public:
int min;
int max;
};
#endif
