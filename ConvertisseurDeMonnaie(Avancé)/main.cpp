#include "myfunctions.h"
#include <iostream>
#include <string>

int main()
{
	char tryAgain{};

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
		tryAgain = retry();

	} while (tryAgain == 'y');
	
	std::cout << "\nThanks for having been here ! \x02" << std::endl;

	return 0;
}