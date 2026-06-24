#include "integration.h"
#include "calculator.h"


int add_results(int a, int b, int c, int d)
{
    int result1 = add(a, b);
    int result2 = sub(c, d);

    return result1 + result2;
}