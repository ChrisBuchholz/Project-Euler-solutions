#include <iostream>
#include <vector>

std::vector<int> find_factors(unsigned long long n)
{
	std::vector<int> factors;
	for (unsigned long long i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
			factors.push_back(i);
			factors.push_back(n/i);
		}
	}
	return factors;
}

int triangular_number(int n)
{
	int sum = 0;
	for (int i = 0; i <= n; ++i)
		sum += i;
	return sum;
}

int main(int argc, const char * argv[])
{
	unsigned long long num = 0;
	for (unsigned long long i = 0, t = 0; ; ++i, t = triangular_number(i)) {
		int factors = find_factors(t).size();

		if (factors > 500) {
			num = t;
			break;
		}
	}
	std::cout << num << std::endl;
    return 0;
}
