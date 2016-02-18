#Makefile for labs
#Ian Larkin
#CSCI 21

FLAGS = -Wall -Wextra -pedantic


#makes assignment 1 executable
assignment1: assignment_1.o assignment_1_unit_test.o
	g++ -o assign1test $(FLAGS) assignment_1.o assignment_1_unit_test.o

#creates assignment 1 object
assignment_1.o: assignment_1.h assignment_1.cpp
	g++ -c $(FLAGS) assignment_1.cpp

#creates assignment 1 unit test objet	
assignment_1_unit_test.o: assignment_1.h assignment_1_unit_test.cpp
	g++ -c $(FLAGS) assignment_1_unit_test.cpp

#makes lab8 executable
lab8: lab_7.o lab_8_unit_test.o
	g++ -o lab8test $(FLAGS) lab_7.o lab_8_unit_test.o

#creates lab 8 unit test object
lab_8_unit_test.o: lab_7.h lab_8_unit_test.cpp
	g++ -c $(FLAGS) lab_8_unit_test.cpp

#makes lab7 executable
lab7: lab_7.o lab_7_unit_test.o
	g++ -o lab7test $(FLAGS) lab_7.o lab_7_unit_test.o

#creates lab7 object
lab_7.o: lab_7.h lab_7.cpp
	g++ -c $(FLAGS) lab_7.cpp


#creates lab 7 unit test object
lab_7_unit_test.o: lab_7.h lab_7_unit_test.cpp
	g++ -c $(FLAGS) lab_7_unit_test.cpp






#makes lab6 executable
lab6: lab_6.o lab_6_unit_test.o
	g++ -o lab6test $(FLAGS) lab_6.o lab_6_unit_test.o

#creates lab6 object
lab_6.o: lab_6.h lab_6.cpp
	g++ -c $(FLAGS) lab_6.cpp

#creates lab6 unit test objet	
lab_6_unit_test.o: lab_6.h lab_6_unit_test.cpp
	g++ -c $(FLAGS) lab_6_unit_test.cpp


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
