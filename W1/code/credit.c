#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int callCardInvalid(void)
{
    printf("INVALID \n");
    return false;
}

int checkIfCardIsValid(long creditCardNumber, int creditCardNumberLenght)
{
    char creditCardNumberString[50];
    snprintf(creditCardNumberString, 50, "%ld", creditCardNumber);

    char oddCharMultiplied[50];

    for (int i = creditCardNumberLenght; i > 0; i--)
    {
        if (i % 2 != 0)
        {
          strcat(str, tmp);
        } else
        {

        }
    }

    return true;
}

int main(void)
{
    long int creditCardNumber = get_long("What's your card number? \n");
    long creditCardNumberForLenght = creditCardNumber;
    int creditCardNumberLenght = 0;

    do
    {
        creditCardNumberLenght++;
        creditCardNumberForLenght /= 10;
    } while(creditCardNumberForLenght != 0);

    if (creditCardNumberLenght <= 16 && creditCardNumberLenght >= 13)
    {
        bool cardIsValid = checkIfCardIsValid(creditCardNumber, creditCardNumberLenght);
        if (cardIsValid)
        {
            printf("VALID \n");
        } else
        {
            callCardInvalid();
        }
    } else
    {
       callCardInvalid();
    }
}
