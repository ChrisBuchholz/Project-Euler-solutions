#include <iostream>
#include <cmath>

bool is_prime(unsigned long long n)
{
    if (n < 2) return false;
    if (n == 2) return true;

    bool prime = true;

    for (int j = 2; j <= std::sqrt(n); j++) {
        if (n % j == 0) {
            prime = false;
            break;    
        }
    }

    if (prime) return true;

    return false;
}

int main(int argc, const char * argv[])
{
    int count;
    int prime;

    for (int i = 0; ; i++) {
        if (is_prime(i))
            count++;

        if (count == 10001) {
            prime = i;
            break;
        }
    }

    std::cout << prime << std::endl;

    return 0;
}
