#include <iostream>
#include <string>

int main()
{
	while (true)
	{
		std::cout << "Type Hello World! \n";

		std::string input = "";
		std::getline(std::cin, input);

		if (input == "Hello World!")
		{
			std::cout << "You typed Hello World!\n";
		}
		else
		{
			return 0;
		}
	}
}