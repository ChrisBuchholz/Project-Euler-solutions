/**
 * 2520 is the smallest number that can be divided by each of the numbers
 * from 1 to 10 without any remainder.
 *
 * What is the smallest positive number that is evenly divisible by all of the
 * numbers from 1 to 20?
 **/

#include <iostream>

int main(int argc, const char * argv[])
{
    int num;

    for (int i = 1; ; i++) {
        bool pass = true;

        for (int j = 1; j <= 20; j++) {
            if(i % j != 0)
                pass = false;
        }

        if (pass) {
            num = i;
            break;
        }
    }

    std::cout << num << std::endl;

    return 0;
}
