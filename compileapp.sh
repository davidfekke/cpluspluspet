rm *.o
rm hello
g++ -std=c++11 -c Pet.h Pet.cpp helloworld.cpp
g++ -o hello Pet.o helloworld.o -lm
rm *.o
