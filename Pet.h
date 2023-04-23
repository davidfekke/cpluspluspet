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
        static int doubleLimbs(int limbs);
        static void petsay(string something);

        Pet(int, string);
        Pet();
        ~Pet(); 
};
