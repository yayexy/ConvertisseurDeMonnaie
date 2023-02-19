#include "getusermoney.h"
#include <iostream>
#include <string>

std::string getUserMoney()
{
	std::string currencyToConvert{};
	std::cout << "What's the currency to convert ? "; 
	std::getline(std::cin, currencyToConvert);

	//std::cout << currencyToConvert << std::endl;

	int length = currencyToConvert.length();
	if (length > 0 && currencyToConvert[length-1] == ' ')		//allows us to verify if there are whitespaces at the end of the user's answer and to remove that
	{
		currencyToConvert.pop_back();
	}

	//std::cout << currencyToConvert << std::endl;

	return currencyToConvert;
}