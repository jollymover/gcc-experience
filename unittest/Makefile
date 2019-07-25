all : main hello_unittest

clean :
	rm -f *.o *.exe

main.o : main.cpp hello.h
	$(CXX) -c main.cpp

hello.o : hello.cpp hello.h
	$(CXX) -c hello.cpp

hello_unittest.o : hello_unittest.cpp hello.h
	$(CXX) -c hello_unittest.cpp

main : main.o hello.o
	$(CXX) -lpthread $^ -o $@

hello_unittest : hello.o hello_unittest.o /usr/lib/gtest_main.a
	$(CXX) $^ -o $@

