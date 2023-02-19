#include "amountconversion.h"
#include <iostream>

float convertedAmount(std::string getUserMoney, std::string getUserConversionMoney, float getUserAmount)
{
	float finalAmount{};

	if (getUserMoney == "euro")
	{
		if (getUserConversionMoney == "dollar americain")
		{
			finalAmount = getUserAmount * 1.07;
			std::cout << "euro dollar" << '\n';
		}
		else if (getUserConversionMoney == "rouble")
		{
			finalAmount = getUserAmount * 78.21;
			std::cout << "euro rouble" << '\n';
		}
		else
		{
			std::cout << "une erreur a été détecté" << '\n';
		}
	}

	else if (getUserMoney == "dollar americain")
	{
		if (getUserConversionMoney == "euro")
		{
			finalAmount = getUserAmount * 0.93;
			std::cout << "dollar euro" << '\n';
		}
		else if (getUserConversionMoney == "rouble")
		{
			finalAmount = getUserAmount * 73.11;
		}
		else
		{
			std::cout << "une erreur a été détecté" << '\n';
		}
	}

	else	//it's for the rouble currency
	{
		if (getUserConversionMoney == "euro")
		{
			finalAmount = getUserAmount * 0.013;
			std::cout << "rouble euro" << '\n';
		}
		else if (getUserConversionMoney == "dollar americain")
		{
			finalAmount = getUserAmount * 0.014;
			std::cout << "dollar euro" << '\n';
		}
		else
		{
			std::cout << "une erreur a été détecté" << '\n';
		}
	}

	return finalAmount;
}