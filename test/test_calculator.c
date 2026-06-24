#include "unity.h"
#include "calculator.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_add(void)
{
    TEST_ASSERT_EQUAL(5, add(2,3));
}

void test_sub(void)
{
    TEST_ASSERT_EQUAL(2, sub(5,3));
}

void test_mul(void)
{
    TEST_ASSERT_EQUAL(15, mul(5,3));
}

void test_div(void)
{
    TEST_ASSERT_EQUAL(5, divide(15,3));
}
