#ifndef FIZZBUZZTEST_H
#define FIZZBUZZTEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "FizzBuzz.h"

class FizzBuzzTest : public CppUnit::TestFixture
{
  CPPUNIT_TEST_SUITE( FizzBuzzTest );
  CPPUNIT_TEST( itReturnsFizzFor_3 );
  CPPUNIT_TEST_SUITE_END();

public:
  void setUp();
  void tearDown();
  void itReturnsFizzFor_3();
};

#endif  // FIZZBUZZTEST_H
