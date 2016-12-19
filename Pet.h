#include <iostream>
#include <string>
using namespace std;

class Pet {
    private:
        int limbs;
        string name;
    public:
        int getLimbs();
        string getName();
        void setName(string nm);
        void setLimbs(int lmbs);
        void toString();

        Pet(int, string);
        Pet();
        ~Pet(); 
};
