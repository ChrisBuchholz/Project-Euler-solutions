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
