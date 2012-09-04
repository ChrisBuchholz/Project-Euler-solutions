/**
 * The following iterative sequence is defined for the set of
 * positive integers:
 *
 * n  n/2 (n is even)
 * n  3n + 1 (n is odd)
 *
 * Using the rule above and starting with 13, we generate the
 * following sequence:
 *
 * 13  40  20  10  5  16  8  4  2  1
 * It can be seen that this sequence (starting at 13 and finishing at 1)
 * contains 10 terms. Although it has not been proved yet (Collatz Problem),
 * it is thought that all starting numbers finish at 1.
 *
 * Which starting number, under one million, produces the longest chain?
 *
 * NOTE: Once the chain starts the terms are allowed to go above one million.
 **/

#include <iostream>
#include <vector>

int main(int argc, char * argv[])
{
    int biggest = 0, index = 0, size = 0;
    unsigned long j = 0;
    std::vector<unsigned long> chain = {};

    for (int i = 999999; i > 0; i -= 2) {
        j = i;
        chain = {};
        int k = 1;

        while ( j >= 1) {
           chain.push_back(j);
           if (j == 1)
               break;
           j = j % 2 == 0 ? j / 2 : 3 * j + 1;
           ++k;
        }

        size = chain.size();

        if (size > biggest) {
            biggest = size;
            index = i;
        }
    }

    std::cout << index << std::endl;

    return 0;
}
