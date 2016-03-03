#Makefile for labs
#Ian Larkin
#CSCI 21

FLAGS = -Wall -Wextra -pedantic


#makes lab12 executable
lab12: item.o food_item.o magic_item.o lab_12_unit_test.o
	g++ -o lab12test $(FLAGS) item.o food_item.o magic_item.o lab_12_unit_test.o
	
#makes item object
item.o: item.h item.cpp
	g++ -c $(FLAGS) item.cpp
	
#makes food_item object
food_item.o: food_item.h food_item.cpp
	g++ -c $(FLAGS) food_item.cpp

#makes magic_item object
magic_item.o: magic_item.h magic_item.cpp
	g++ -c $(FLAGS) magic_item.cpp
	
#makes lab 12 unit test object
lab_12_unit_test.o: item.h food_item.h magic_item.h lab_12_unit_test.cpp
	g++ -c $(FLAGS) lab_12_unit_test.cpp




#makes lab11 executable
lab11: money.o lab_11_unit_test.o
	g++ -o lab11test $(FLAGS) money.o lab_11_unit_test.o

#creates money object
money.o: money.h money.cpp
	g++ -c $(FLAGS) money.cpp

#creates lab11 unit test objet	
lab_11_unit_test.o: money.h lab_11_unit_test.cpp
	g++ -c $(FLAGS) lab_11_unit_test.cpp

#makes lab10 executable
lab10: temperature.o lab_10_unit_test.o
	g++ -o lab10test $(FLAGS) temperature.o lab_10_unit_test.o

#creates temperature object
temperature.o: temperature.h temperature.cpp
	g++ -c $(FLAGS) temperature.cpp

#creates lab10  unit test objet	
lab_10_unit_test.o: temperature.h lab_10_unit_test.cpp
	g++ -c $(FLAGS) lab_10_unit_test.cpp

#makes lab9 executable
lab9: lab_9.o lab_9_unit_test.o
	g++ -o lab9test $(FLAGS) lab_9.o lab_9_unit_test.o

#creates lab9 object
lab_9.o: lab_9.h lab_9.cpp
	g++ -c $(FLAGS) lab_9.cpp

#creates lab9 unit test objet	
lab_9_unit_test.o: lab_9.h lab_9_unit_test.cpp
	g++ -c $(FLAGS) lab_9_unit_test.cpp

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


#makes lab4 executable
lab4: lab_4.o lab_4_unit_test.o
	g++ -o lab4test $(FLAGS) lab_4.o lab_4_unit_test.o

#creates lab4 object
lab_4.o: lab_4.h lab_4.cpp
	g++ -c $(FLAGS) lab_4.cpp

#creates lab4 unit test objet	
lab_4_unit_test.o: lab_4.h lab_4_unit_test.cpp
	g++ -c $(FLAGS) lab_4_unit_test.cpp	
	


#creates lab3 test executable
lab3test: lab_3.o
	g++ $(FLAGS) -o lab3 lab_3.o

#creates lab3 object
lab3: lab_3.cpp 
	g++ $(FLAGS) -c lab_3.cpp 

clean: 
	rm -f *.o
