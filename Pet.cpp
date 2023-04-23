#include "Pet.h"

int Pet::getLimbs() {
    return limbs;
}

string Pet::getName(){
    return name;
}

void Pet::setName(string nm) {
    this->name = nm;
}

void Pet::setLimbs(int lmbs) {
    this->limbs = lmbs;
}

void Pet::toString() {
    cout << "This pet " << this->name << " has " << this->limbs << " Limbs." << endl; 
}

int Pet::doubleLimbs(int limbs)
{
    return limbs * 2;
}

void Pet::petsay(string something) {
    cout << "Your pet sez: " + something << endl;
}

// Pet C++ Destructor
Pet::~Pet() {
    cout << "This Pet " << this->name << " was destroyed" << endl;
}

// C++ convience Constructor 
Pet::Pet() : Pet(0, "") { }

// C++ Constructor
Pet::Pet(int limbs, string name) {
    this->limbs = limbs;
    this->name = name;
}
