#include "getuserconversionmoney.h"
#include <iostream>
#include <string>

std::string getUserConversionMoney()
{
	std::string currencyConverted{};
	std::cout << "What's the converted currency ? ";
	std::getline(std::cin, currencyConverted);
	
	//std::cout << currencyConverted << std::endl;

	int length = currencyConverted.length();
	if (length > 0 && currencyConverted[length - 1] == ' ')		//allows us to verify if there are whitespaces at the end of the user's answer and to remove that
	{
		currencyConverted.pop_back();
	}

	//std::cout << currencyConverted << std::endl;

	return currencyConverted;
}