#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H
#include <iostream>
#include <string>

std::string getUserMoney();

std::string getUserConversionMoney();

float getUserAmount();

float convertedAmount(std::string getUserMoney, std::string getUserConversionMoney, float getUserAmount);

char retry();

#endif