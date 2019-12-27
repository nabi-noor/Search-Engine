output:
    g++ main.o Hash.o LinkedList.o Movie.o Node.o -o output

main.o:
    g++ -c main.cpp Movie.cpp Hash.cpp LinkedList.cp Node.cpp

Movie.0:
    g++ -c Movie.cpp 

Hash.o:
    g++ -c Hash.cpp LinkedList.cpp

LinkedList.o:
    g++ LinkedList.cpp Node.cpp

Node.o:
    g++ -c Node.cpp

clean:
    rm *.o output

