#include <iostream>
#include <cmath>
#include <string>

int main(int argc, char * argv[])
{
    int sum = 0;
    std::string numstr = std::to_string(std::pow(2.0, 1000));

    for (std::string::const_iterator i = numstr.begin(); i != numstr.end(); ++i) {
        if (std::isdigit(*i))
            sum += *i - '0';
    }

    std::cout << sum << std::endl;

    return 0;
}
