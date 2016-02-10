#Makefile for labs
#Ian Larkin
#CSCI 21

FLAGS = -Wall -Wextra -pedantic

#makes lab5 executable
lab5: lab_5.o lab_5_unit_test.o
	g++ -o lab5test $(FLAGS) lab_5.o lab_5_unit_test.o

#creates lab5 object
lab_5.o: lab_5.h lab_5.cpp
	g++ -c $(FLAGS) lab_5.cpp

#creates lab5 unit test objet	
lab_5_unit_test.o: lab_5.h lab_5_unit_test.cpp
	g++ -c $(FLAGS) lab_5_unit_test.cpp

#creates lab3 test executable
lab3test: lab_3.o
	g++ $(FLAGS) -o lab3 lab_3.o

#creates lab3 object
lab3: lab_3.cpp 
	g++ $(FLAGS) -c lab_3.cpp 

clean: 
	rm -f *.o
