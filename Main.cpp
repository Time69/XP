#include "Include.h"

using boost::multiprecision::cpp_int;

cpp_int create_key(const cpp_int &n, int g, const cpp_int &x)
{
	return modular_pow(g, x, n);
}

cpp_int create_shared_key(const cpp_int &n, int g, const cpp_int &x_a, cpp_int y_b)
{
	return  modular_pow(y_b, x_a, n);;
}


int main()
{
	std::vector<cpp_int> g;
	cpp_int x_a, x_b;
	cpp_int y_a, y_b;
	int bits;
	int t;
	cpp_int num;


	while (1 > 0)
	{

		int x;


		std::cout << "Enter [1] to create prime number and its first root\nEnter [2] to create your key\nEnter [3] to create shared key\nEnter [4] to exit\n";
		std::cin >> x;
		switch (x)
		{
		case 1:
			std::cout << "Enter an amount of bits: ";
			std::cin >> bits;
			num = create_prime_number(bits);
			std::cout << "Prime number = " << num << std::endl;
			g = initial_roots(num, 1);
			std::cout << "g = " << g[0] << std::endl;
			std::cout << std::endl << std::endl;
			break;

		case 2:
			std::cout << "Enter a number: ";
			std::cin >> num;
			std::cout << "Enter its first root: ";
			std::cin >> g[0];
			x_a = create_number(rand() % ((convert_decimal_to_binary(num).length()) - 2) + 2);
			y_a = create_key(num, int(g[0]), x_a);
			std::cout << "X = " << x_a << std::endl;
			std::cout << "Y = " << y_a << std::endl;
			std::cout << std::endl << std::endl;
			break;

		case 3:
			std::cout << "Enter a number: ";
			std::cin >> num;
			std::cout << "Enter its first root: ";
			std::cin >> g[0];
			std::cout << "Enter a X: ";
			std::cin >> x_a;
			std::cout << "Enter a Y: ";
			std::cin >> y_b;
			std::cout << "Shared key = " << create_shared_key(num, int(g[0]), x_a, y_b) << std::endl;
			std::cout << std::endl << std::endl;
			break;

		case 4:
			system("pause");
			return 0;

		}
	}

	std::cout << "\n\n";
	system("pause");
	return 0;
}
