#include "getuseramount.h"
#include <iostream>
#include <string>

float getUserAmount()
{
	float userAmountCurrency{};
	std::cout << "What's the amount ? ";
	std::cin >> userAmountCurrency;

	//std::cout << userAmountCurrency;

	return userAmountCurrency;
}