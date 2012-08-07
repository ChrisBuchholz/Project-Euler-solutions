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

    unsigned long long sum = 0;

    for (int i = 2; i < 2000000; ++i) {
        if (is_prime(i))
            sum += i;
    }

    std::cout << sum << std::endl;

    return 0;
}
