TESTS = unittest

all : $(TESTS)

clean :
	rm -f unittest.o unittest.exe

unittest.o : unittest.cpp
	$(CXX) -c $^

unittest : unittest.o /usr/lib/libgtest.a
	$(CXX) $^ -o $@
