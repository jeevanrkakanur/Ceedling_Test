#include "unity.h"
#include "integration.h"
#include "calculator.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_add_results(void)
{
    int result = add_results(2, 3, 10, 2);

    TEST_ASSERT_EQUAL(13, result);
}
