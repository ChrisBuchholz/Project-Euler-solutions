#include <iostream>

int fibonacci(int n)
{
    if (n < 2)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main(int argc, const char * argv[])
{
    int sum, current;

    for (int i = 0;; i++) {
        current = fibonacci(i);
        if (current >= 4000000)
            break;
        if (current % 2 == 0)
            sum += current;
    }

    std::cout << sum << std::endl;

    return 0;
}
