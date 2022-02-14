int entered;

int dicer;
/* 
rolls an input number of dice, then adds the dice together and displays the total.
This should be a different tool than a roll and sparser , which would operate by asking for the number of dice, faces and the dice to start counting from before rolling ( same code as this one) and adding up the totals of every dice ( how many sixes, sevens, eights , ect)

This specific one is basically done
*/

int BaseRoll() {
  for (int i = 0; i < 1;){  
  
  
  std::cout << "Enter number of dice faces\n";
  std::cin >> entered;
  if (entered >= 50000){
  std::  cout << "https://raw.githubusercontent.com/22Barrera-Rubio/imagething/40685fd14f644295d6d2e3c665ae5330008cb8bd/ecghbg.jpg?token=AXXFPYNHJAOIS3H6TQMDG5TCBLR3E    ";
    return 0;
  }
  else
 std::cout << "How many dice?\n";
 
  int dicecount{};
  int totalnum{};
  std::cin >> dicecount;
  if (dicecount >= 50000){
    std::cout << "https://raw.githubusercontent.com/22Barrera-Rubio/imagething/40685fd14f644295d6d2e3c665ae5330008cb8bd/ecghbg.jpg?token=AXXFPYNHJAOIS3H6TQMDG5TCBLR3E     ";
    return 0;
  }
  else
  std::srand(time(NULL));
  
  
// info for srand from https://mathbits.com/MathBits/CompSci/LibraryFunc/rand.htm
// basically rand() uses a seed but if not set, it'll use the same thing over and over again. To prevent this, you set seed with srand(number). Using time makes it do it with time, so it's a lot more random. 
  for (int z = 0; z < dicecount; z++)
  {
    std::cout << "You rolled: ";
    std::cout <<endl;
  
  dicer = rand() % entered + 1;
  totalnum = totalnum + dicer;
  std::cout << "                       " << dicer <<endl;
  
  }
  std::cout <<endl;
  std::cout << "Dice total is : ";
  std::cout << totalnum <<endl;
  std::cout <<endl;
  
  
  }
} 