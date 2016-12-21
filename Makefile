all: hello

hello: Pet.o helloworld.o
	g++ Pet.o helloworld.o -o hello

Pet.o: Pet.cpp
	g++ -std=c++11 -c Pet.cpp

helloworld.o: helloworld.cpp
	g++ -std=c++11 -c helloworld.cpp

clean:
	[ -f helloworld.o ] && rm helloworld.o
	[ -f Pet.o ] && rm Pet.o
	[ -f hello ] && rm hello