all: hello

hello: Pet.o helloworld.o
	g++ Pet.o helloworld.o -o hello

Pet.o: Pet.cpp
	g++ -std=c++11 -c Pet.cpp

helloworld.o: helloworld.cpp
	g++ -std=c++11 -c helloworld.cpp

clean:
	rm *o hello