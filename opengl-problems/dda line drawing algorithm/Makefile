LIB= -lglut -lGL -lGLU
 
line: line.cpp
	g++ line.cpp -o line $(LIB)

line1: init.o body.o main.o
	g++ -o line1 init.o body.o main.o $(LIB)
	

init.o: init.cpp
	g++ -c init.cpp 

body.o: body.cpp
	g++ -c body.cpp
main.o: main.cpp
	g++ -c main.cpp

clean: 
	rm *.o

	
