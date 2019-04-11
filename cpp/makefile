CXXFLAGS= -std=c++11
DEPEND= Node.hpp LinkedList.hpp Stack.hpp Queue.hpp

main: main.o
	g++ $(CXXFLAGS) -o main main.o

test: test.o
	g++ $(CXXFLAGS) -o test test.o

main.o: main.cpp $(DEPEND)
	g++ $(CXXFLAGS) -c main.cpp $(DEPEND)

test.o: test.cpp $(DEPEND)
	g++ $(CXXFLAGS) -c test.cpp $(DEPEND)

clean:
	rm -rf *.o *.gch main test .DS_Store
