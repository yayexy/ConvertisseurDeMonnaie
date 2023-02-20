#include "myfunctions.h"
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


float getUserAmount()
{
	float userAmountCurrency{};
	std::cout << "What's the amount ? ";
	std::cin >> userAmountCurrency;

	//std::cout << userAmountCurrency;

	return userAmountCurrency;
}


std::string getUserMoney()
{
	std::string currencyToConvert{};
	std::cout << "What's the currency to convert ? ";
	std::getline(std::cin, currencyToConvert);

	//std::cout << currencyToConvert << std::endl;

	int length = currencyToConvert.length();
	if (length > 0 && currencyToConvert[length - 1] == ' ')		//allows us to verify if there are whitespaces at the end of the user's answer and to remove that
	{
		currencyToConvert.pop_back();
	}

	//std::cout << currencyToConvert << std::endl;

	return currencyToConvert;
}


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
