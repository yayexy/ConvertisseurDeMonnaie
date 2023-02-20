#include "myfunctions.h"
#include <iostream>
#include <string>

int main()
{
	char run;
	
	do
	{
		std::string userMoney = getUserMoney();
		std::string userConversionMoney = getUserConversionMoney();
		float userAmount = getUserAmount();
		
		float amount = convertedAmount(userMoney, userConversionMoney, userAmount);

		std::cout << amount << '\n';
		std::cout << "Do you want to retry ? (y or n) ";
		std::cin >> run;

	} while (run == 'y');
	
	std::cout << "Thanks for having been here !" << std::endl;

	return 0;
}