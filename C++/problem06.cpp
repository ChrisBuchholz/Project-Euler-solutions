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
