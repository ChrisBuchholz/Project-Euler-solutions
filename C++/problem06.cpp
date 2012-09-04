/**
 * The sum of the squares of the first ten natural numbers is,
 *
 * 12 + 22 + ... + 102 = 385
 * The square of the sum of the first ten natural numbers is,
 *
 * (1 + 2 + ... + 10)2 = 552 = 3025
 * Hence the difference between the sum of the squares of the first ten
 * natural numbers and the square of the sum is 3025  385 = 2640.
 *
 * Find the difference between the sum of the squares of the first one
 * hundred natural numbers and the square of the sum.
 **/

#include <iostream>
#include <math.h>

int main(int argc, const char * argv[])
{
    int sum_square;
    int square_sum;

    for (int i = 1; i <= 100; i++) {
        sum_square += pow(i, 2);
    }

    for (int i = 1; i <= 100; i++) {
        square_sum += i;
    }

    square_sum = pow(square_sum, 2);

    std::cout << square_sum - sum_square << std::endl;

    return 0;
}
