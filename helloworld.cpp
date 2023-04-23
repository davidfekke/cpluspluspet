
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;

void say(string something) {
    cout << "Print " + something << endl;
}

int main()
{
  Pet *miles = new Pet(8, "Miles");
  miles->toString();

  miles->setName("Babebe!");
  miles->setLimbs(6);
  miles->toString();
  
  //delete bebe;
  delete miles;

  Pet charlie(4, "Charlie the dog");
  
  cout << charlie.getName() << " is my other pet." << endl;
  Pet *chuck = &charlie;
  chuck->setLimbs(Pet::doubleLimbs(chuck->getLimbs()));

  chuck->toString();

  say("Did this work?");
  return 0;
}