CXXFLAGS= -Wall -std=c++11
CLEAN= list 

clean:
	rm  -rf $(CLEAN) ./*.o

run: all
	./list

all: main list
	g++ $(CXXFLAGS) main.o list.o -o list

main: main.cpp
	g++ $(CXXFLAGS) -c  main.cpp -o main.o

list: list.cpp list.hpp
	g++ $(CXXFLAGS) -c list.cpp -o list.o
	echo "lista gotowa!!!"

cf: createFiles
	echo "files created!!!"

createFiles:
	touch list.cpp list.hpp main.cpp
	echo "int main(int argc, char ** argv){return 0;}" > ./main.cpp 
