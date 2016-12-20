
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;

void say(string something) {
    cout << "Print " + something << endl;
}

int main()
{
  Pet *bebe = new Pet(8, "Bebe");
  bebe->toString();

  bebe->setName("Babebe!");
  bebe->setLimbs(6);
  bebe->toString();
  
  //delete bebe;
  delete bebe;

  Pet charlie(4, "Charlie the dog");
  
  cout << charlie.getName() << " is my other pet." << endl;
  Pet *chuck = &charlie;
  
  chuck->toString();

  say("Did this work?");
  return 0;
}