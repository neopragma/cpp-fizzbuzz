# Rules for the test code (use `make check` to execute)
TESTS = FizzBuzzApp
check_PROGRAMS = $(TESTS)
FizzBuzzApp_SOURCES = FizzBuzz.h FizzBuzzTest.h FizzBuzzTest.cpp FizzBuzzApp.cpp
FizzBuzzApp_CXXFLAGS = $(CPPUNIT_CFLAGS)
FizzBuzzApp_LDADD = $(CPPUNIT_LIBS) -ldl
