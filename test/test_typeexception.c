#include "unity.h"
#include "typeexception.h"
#include "Exception.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_tryException(void)
{
  tryException(2);
  tryException(0);
  tryException(-2);
}