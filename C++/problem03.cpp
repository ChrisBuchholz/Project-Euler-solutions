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
    unsigned long long n = 600851475143;
    unsigned long long prime;

    for (unsigned long long i = std::sqrt(n); i > 1; i--) {
        if (n % i == 0) {
            if (is_prime(i)) {
                prime = i;
                break;
            }
        }
    }

    std::cout << prime << std::endl;

    return 0;
}
