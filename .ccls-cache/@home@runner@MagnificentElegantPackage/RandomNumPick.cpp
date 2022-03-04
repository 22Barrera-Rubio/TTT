#include <iostream>
#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int numberer(){
Numie objR;
srand(time(NULL));
cout << "Enter Minimum" << endl;
cin >> objR.min;
cout << "Enter Maximum" << endl;
cin >> objR.max;
int sneran{};
sneran = (rand() % objR.max + objR.min);
cout << sneran;

  }