GTEST_HEADERS = /usr/include/gtest/*.h \
                /usr/include/gtest/internal/*.h

all : main hello_unittest

clean :
	rm -f *.exe *.o

main.o : main.cpp hello.h $(GTEST_HEADERS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c main.cpp

hello.o : hello.cpp hello.h $(GTEST_HEADERS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c hello.cpp

hello_unittest.o : hello_unittest.cpp \
                   hello.h $(GTEST_HEADERS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c hello_unittest.cpp

main : main.o hello.o
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -lpthread $^ -o $@

hello_unittest : hello.o hello_unittest.o /usr/lib/gtest_main.a
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -lpthread $^ -o $@
