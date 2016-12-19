[ -f hello ] && rm hello
g++ -std=c++11 -c Pet.cpp helloworld.cpp
g++ -o hello Pet.o helloworld.o -lm
rm *.o
./hello
