#include "FizzBuzzTest.h"
#include "FizzBuzz.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( FizzBuzzTest );

void 
FizzBuzzTest::setUp()
{
}

void 
FizzBuzzTest::tearDown()
{
}

void
FizzBuzzTest::itReturnsFizzFor_3()
{
  FizzBuzz fb = FizzBuzz();
  CPPUNIT_ASSERT( "Fizz" == fb.processNumber(3) );
}

