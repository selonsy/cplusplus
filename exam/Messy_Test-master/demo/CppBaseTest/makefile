build : hw2.o solution.o
    g++ -o build hw2.o solution.o #注意前面必须是tab，不能是空格
hw2.o : hw2.cpp solution.h
    g++ -g -c hw2.cpp
solution.o : solution.h solution.cpp
    g++ -g -c solution.cpp
clean :
    rm hw2.o solution.o build