CC = g++

all : permutation permutation_unittest

clean :
	rm -f *.o *.exe

permutation.o : permutation.cpp permutation.h
	$(CXX) -c permutation.cpp

checkperm.o : checkperm.cpp permutation.h
	$(CXX) -c checkperm.cpp

permutation_unittest.o : permutation_unittest.cpp permutation.h
	$(CXX) -c permutation_unittest.cpp

permutation : permutation.o checkperm.o
	$(CXX) $^ -o $@

permutation_unittest : checkperm.o permutation_unittest.o /usr/lib/gtest_main.a
	$(CXX) $^ -o $@