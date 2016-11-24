#https://www.youtube.com/watch?v=aw9wHbFTnAQ 
CFLAGS=-std=c++14 -c -Wall

#all: list.out

# list adt

list: ListClient.o List.o
	@printf "Compiling List ADT...\n"
	g++ ListClient.o List.o -o list.out
	@printf "\nrun by typing './list.out'"

ListClient.o: ListClient.cpp
	g++ $(CFLAGS) ListClient.cpp

List.o: List.cpp
	g++ $(CFLAGS) List.cpp


# vector stack
stackv: StackVclient.o StackV.o
	@printf "Compiling Stack ADT (vector implementation)...\n"
	g++ StackVclient.o StackV.o -o stackv.out
	@printf "\nrun by typing './stackv.out'"

StackVclient.o: StackVclient.cpp
	g++ $(CFLAGS) StackVclient.cpp

StackV.o: StackV.cpp
	g++ $(CFLAGS) StackV.cpp



# List ADT stack
stackl: StackLclient.o StackL.o
	@printf "Compiling Stack ADT (List ADT implementation)..."
	@printf "**NOTE: This requires the List ADT to be complete**\n"
	g++ StackLclient.o StackL.o -o stackl.out
	@printf "\nrun by typing './stackl.out'"

StackLclient.o: StackLclient.cpp
	g++ $(CFLAGS) StackLclient.cpp

StackL.o: StackL.cpp
	g++ $(CFLAGS) StackL.cpp



# Linked-list  stack
stackll: StackLLclient.o StackLL.o
	@printf "Compiling Stack ADT (List ADT implementation)...\n"
	g++ StackLLclient.o StackLL.o -o stackll.out
	@printf "\nrun by typing './stackll.out'"

StackLLclient.o: StackLLclient.cpp
	g++ $(CFLAGS) StackLLclient.cpp

StackLL.o: StackLL.cpp
	g++ $(CFLAGS) StackLL.cpp



# if user types make run by accident
run:
	@printf "type the name of the executable to run \n./list.out\n./stackl.out\nstackll.out\nstackv.out\n\n"

clean:
	rm -f *.out *.o 
