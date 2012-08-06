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
