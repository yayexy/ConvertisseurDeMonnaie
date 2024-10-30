#include "myfunctions.h"
#include <iostream>
#include <string>

int main()
{
    char tryAgain;
    char changeCurrencies = 'n';
    float userAmount;
    float amount;

    // Demande initiale des devises
    std::string userMoney = getUserMoney();
    std::string userConversionMoney = getUserConversionMoney();

    do
    {
        // Demander le montant à convertir
        userAmount = getUserAmount();
        
        // Conversion de la monnaie choisie par l'utilisateur avec le montant correct
        amount = convertedAmount(userMoney, userConversionMoney, userAmount);
        std::cout << "Converted amount: " << amount << '\n';

        // Demander à l'utilisateur s'il veut réessayer
        tryAgain = retry();

        if (tryAgain == 'y') {
            std::cout << "Convert another amount - y" << std::endl;
            std::cout << "Quit - n" << std::endl;
            std::cin >> changeCurrencies;  // Ce choix détermine s'il change de devise

            // Si l'utilisateur veut changer de devise, on redemande les devises
            if (changeCurrencies == 'y') {
                userMoney = getUserMoney();
                userConversionMoney = getUserConversionMoney();
            } else {
                // Si l'utilisateur ne change pas de devise, on garde les devises actuelles
                std::cout << "Current currencies remain: " << userMoney << " to " << userConversionMoney << std::endl;
            }
        }
    } while (tryAgain == 'y');
    
    std::cout << "\nThanks for having been here ! \x02" << std::endl;

    return 0;
}
