#include "getusermoney.h"
#include "getuserconversionmoney.h"
#include "getuseramount.h"
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
		
		std::cout << "Do you want to retry ? (y or n)";
		std::cin >> run;

	} while (run == 'y');
	
	std::cout << "Thanks for having been here !" << std::endl;

	return 0;
}