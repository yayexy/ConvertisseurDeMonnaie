#ifndef MYFUNCTIONS_HPP
#define MYFUNCTIONS_HPP
#include <iostream>
#include <string>

std::string getUserMoney();

std::string getUserConversionMoney();

float getUserAmount();

float convertedAmount(std::string getUserMoney, std::string getUserConversionMoney, float getUserAmount);

#endif