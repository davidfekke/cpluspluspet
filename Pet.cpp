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

Pet::Pet(int limbs, string name) {
    this->limbs = limbs;
    this->name = name;
}

Pet::~Pet() {
    cout << "This Pet " << this->name << " was destroyed" << endl;
}

Pet::Pet() : Pet(0, "") { }

void Pet::toString() {
    cout << "This pet " << this->name << " has " << this->limbs << " Limbs." << endl; 
}