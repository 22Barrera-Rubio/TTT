int entered;

int dicer;


/* to add is something that takes the totals and adds them up




*/







int main() {
  for (int i = 0; i < 1;){  
  
  
  std::cout << "Enter number of dice faces\n";
  cin >> entered;
  if (entered >= 50000){
    cout << "https://files.catbox.moe/ecghbg.jpg    ";
    return 0;
  }
  else
 cout << "How many dice?\n";
 
  int dicecount{};
  int totalnum{};
  cin >> dicecount;
  if (dicecount >= 50000){
    cout << "https://files.catbox.moe/ecghbg.jpg     ";
    return 0;
  }
  else
  srand(time(NULL));
  
  
// info for srand from https://mathbits.com/MathBits/CompSci/LibraryFunc/rand.htm
// basically rand() uses a seed but if not set, it'll use the same thing over and over again. To prevent this, you set seed with srand(number). Using time makes it do it with time, so it's a lot more random. 
  for (int z = 0; z < dicecount; z++)
  {
    cout << "You rolled: ";
    cout <<endl;
  
  dicer = rand() % entered + 1;
  totalnum = totalnum + dicer;
  cout << "                       " << dicer <<endl;
  
  }
  cout <<endl;
  cout << "Dice total is : ";
  cout << totalnum <<endl;
  cout <<endl;
  
  
  }
} 