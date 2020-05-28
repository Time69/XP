#include "Initial_Roots.h"
#include "Prime_Number.h"


cpp_int euler_function(cpp_int n)
{
	cpp_int result = n;
	for (cpp_int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
				n /= i;
			result -= result / i;
		}
	}
	if (n > 1)
		result -= result / n;
	return result;
}

std::vector<cpp_int> initial_roots(cpp_int number, int amount)
{
	std::vector<cpp_int> div;
	std::vector<cpp_int> roots;
	cpp_int n = euler_function(number);
	cpp_int temp = n;


	for (int i = 2; i <= n; i++)
	{
		if (n%i == 0)
		{
			n /= 2;
			div.push_back(i);
			i--;
		}
	}

	std::sort(div.begin(), div.end());
	div.erase(unique(div.begin(), div.end()), div.end());

	n = temp;
	cpp_int counter = 2;
	while (roots.size() < amount)
	{
		bool is_root = true;
		for (int i = 0; i < div.size(); i++)
		{
			if (modular_pow(counter, n / div[i], number) == 1)
			{
				is_root = false;
			}
		}

		if (counter >= number)
		{
			break;
		}
		if (is_root)
		{
			roots.push_back(counter);
		}
		counter++;
	}
	return roots;
}
