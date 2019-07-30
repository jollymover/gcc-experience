CC = g++

all : palperm palperm_unittest

clean :
	rm -f *.o *.exe

main.o : main.cpp palperm.h
	$(CXX) -c main.cpp

palperm.o : palperm.cpp palperm.h
	$(CXX) -c palperm.cpp

palperm_unittest.o : palperm_unittest.cpp palperm.h
	$(CXX) -c palperm_unittest.cpp

palperm : main.o palperm.o
	$(CXX) $^ -o $@

palperm_unittest : palperm.o palperm_unittest.o /usr/lib/gtest_main.a
	$(CXX) $^ -o $@