#include "myfunctions.h"
#include <iostream>
#include <string>

int main()
{
	char run;
	
	do
	{
		//to do requests
		std::string userMoney = getUserMoney();
		std::string userConversionMoney = getUserConversionMoney();
		float userAmount = getUserAmount();
		
		//conversion of the currency chosen by the user just before with the right amount
		float amount = convertedAmount(userMoney, userConversionMoney, userAmount);
		std::cout << amount << '\n';

		//retry
		std::cout << "Do you want to retry ? (y or n) ";
		std::cin >> run;

	} while (run == 'y');
	
	std::cout << "Thanks for having been here !" << std::endl;

	return 0;
}