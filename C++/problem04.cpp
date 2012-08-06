#include <iostream>
#include <sstream>
#include <vector>

bool is_palindromic_number(int n)
{
    std::stringstream ss;
    char digit;
    std::vector<int> digits;

    ss << n;

    while(ss >> digit)
        digits.push_back(std::atoi(&digit));

    return std::equal(digits.begin(), digits.end(), digits.rbegin());
}

int main(int argc, const char * argv[])
{
    bool stop = false;
    int palindrome;

    for (int x = 999; !stop && x > 0; x--) {
        for (int y = 999; !stop && y > 0; y--) {
            int a = x * y;
            if (is_palindromic_number(a)) {
                palindrome = a > palindrome ? a : palindrome;
            }
        }
    }

    std::cout << palindrome << std::endl;

    return 0;
}
