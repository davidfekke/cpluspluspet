
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

  miles->setName("Milesy!");
  miles->setLimbs(4);
  miles->toString();
  
  //delete bebe;
  delete miles;

  Pet charlie(4, "Charlie the dog");
  charlie.setLimbs(5);

  cout << charlie.getName() << " is my other pet with " << charlie.getLimbs() << " limbs." << endl;
  Pet *chuck = &charlie;
  chuck->setLimbs(Pet::doubleLimbs(chuck->getLimbs()));

  chuck->toString();

  Pet::petsay("Did this work?");
  return 0;
}