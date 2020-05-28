#include <iostream>

int main()
{
	char o;
	float num1, num2;

	
	std::cout << "Enter expression: ";
	std::cin >> num1 >> o >> num2;

	switch (o)
	{
	case '+':
		std::cout << num1 << " + " << num2 << " = " << num1 + num2;
		break;
	case '-':
		std::cout << num1 << " - " << num2 << " = " << num1 - num2;
		break;
	case '*':
		std::cout << num1 << " * " << num2 << " = " << num1 * num2;
		break;
	case '/':
		std::cout << num1 << " / " << num2 << " = " << num1 / num2;
		break;
	default:
		
		std::cout << "Error! Unknown operator";
		break;
	}

	std::cout << std::endl << std::endl;
	system("pause");
	return 0;
}
