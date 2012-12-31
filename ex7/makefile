sexist: main.o sexistFuncs.o
	g++ -g -Wall main.o sexistFuncs.o -o sexist

main.o: main.cpp sexistFuncs.hpp
	g++ -g -Wall -c main.cpp

sexistFuncs.o: sexistFuncs.cpp sexistFuncs.hpp
	g++ -g -Wall -c sexistFuncs.cpp

clean:
	rm sexist *.o
