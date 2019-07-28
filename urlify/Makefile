CC = g++

all : urlify urlify_unittest

clean :
	rm -f *.o *.exe

main.o : main.cpp urlify.h
	$(CXX) -c main.cpp

urlify.o : urlify.cpp urlify.h
	$(CXX) -c urlify.cpp

urlify_unittest.o : urlify_unittest.cpp urlify.h
	$(CXX) -c urlify_unittest.cpp

urlify : main.o urlify.o
	$(CXX) $^ -o $@

urlify_unittest : urlify.o urlify_unittest.o /usr/lib/gtest_main.a
	$(CXX) $^ -o $@