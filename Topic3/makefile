#Makefile for labs in topic 3
#Ian Larkin
#CSCI 21

FLAGS = -Wall -Wextra -pedantic


#makes lab18 executable
lab18: sl_node.o sl_list.o lab_18_unit_test.o
	g++ -o lab18test $(FLAGS) sl_node.o sl_list.o lab_18_unit_test.o


#creates sl_list object
sl_list.o: sl_list.h sl_node.h sl_list.cpp
	g++ -c $(FLAGS) sl_list.cpp

#creates sl_node object
sl_node.o: sl_node.h sl_node.cpp
	g++ -c $(FLAGS) sl_node.cpp



#creates lab18 unit test objet	
lab_18_unit_test.o: sl_list.h sl_node.h lab_18_unit_test.cpp
	g++ -c $(FLAGS) lab_18_unit_test.cpp


#makes lab17 executable
lab17: sl_node.o lab_17_unit_test.o
	g++ -o lab17test $(FLAGS) sl_node.o lab_17_unit_test.o

#creates sl_node object
sl_node.o: sl_node.h sl_node.cpp
	g++ -c $(FLAGS) sl_node.cpp

#creates lab17 unit test objet	
lab_17_unit_test.o: sl_node.h lab_17_unit_test.cpp
	g++ -c $(FLAGS) lab_17_unit_test.cpp



#makes lab12 executable
lab12: lab_12.o lab_12_unit_test.o
	g++ -o lab12test $(FLAGS) lab_12.o lab_12_unit_test.o

#creates lab12 object
lab_12.o: lab_12.h lab_12.cpp
	g++ -c $(FLAGS) lab_12.cpp

#creates lab12 unit test objet	
lab_12_unit_test.o: lab_12.h lab_12_unit_test.cpp
	g++ -c $(FLAGS) lab_12_unit_test.cpp
	
clean: 
	rm -f *.o
