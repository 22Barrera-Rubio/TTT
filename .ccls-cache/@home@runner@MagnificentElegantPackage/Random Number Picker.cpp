#include <iostream>
#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int numberer(){
Num objR;
srand(time(NULL));
cout << "Enter Minimum" << endl;
cin >> objR.min;
cout << "Enter Maximum" << endl;
cin >> objR.max;
cout << rand() % objR.max + objR.min;

  }