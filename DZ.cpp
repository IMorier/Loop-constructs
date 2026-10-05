#include <iostream>








int main() {

	{//#1
		std::cout << "#1\n\n";

		int sum{}, num{};
		std::cout << "Wrtite any integer or \'0\' to end: ";
		while (std::cin >> num && num != 0) {
			sum += num;
			std::cout << "Wrtite any integer or \'0\' to end: ";
		}
		std::cout << "Summary: " << sum << std::endl;
	}


	{//#2
		std::cout << "#2\n\n";
		int num{}, sum{};
		std::cout << "Write your number: ";
		std::cin >> num;
		while (num > 0) {
			sum += num % 10;
			num /= 10;
		}
		std::cout << "Sum of the digits: " << sum << std::endl;
	}


	{//#3
		std::cout << "#3\n\n";
		int num{};
		std::cout << "Write your number: ";
		std::cin >> num;
		for (int i = 1; i <= 10; i++) {
			std::cout << num << " * " << i << " = " << num * i << std::endl;
		}
	}





	return 0;
}