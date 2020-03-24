#include <cs50.h>
#include <stdio.h>

int CharToInt(const char c)
{
    switch (c)
    {
        case '0':
            return 0;
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 7;
        case '8':
            return 8;
        case '9':
            return 9;
        default:
            return 0;
    }
}

int sumTheDouble(const int c)
{
    switch (c)
    {
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        case 4:
            return 4;
        case 5:
            return 5;
        case 6:
            return 6;
        case 7:
            return 7;
        case 8:
            return 8;
        case 9:
            return 9;
        case 10:
            return 1;
        case 12:
            return 3;
        case 14:
            return 5;
        case 16:
            return 7;
        case 18:
            return 9;
        default:
            return 0;
    }
}

char *GetCardProvider(const long creditCardNumber)
{
    char creditCardNumberString[50];
    snprintf(creditCardNumberString, 50, "%ld", creditCardNumber);

    int firstDigitOfTheCard = CharToInt(creditCardNumberString[0]);

    switch (firstDigitOfTheCard)
    {
        case 3:
            return "AMEX\n";
        case 4:
            return "VISA\n";
        case 5:
            return "MASTERCARD\n";
        default:
            return "INVALID\n";
    }
}

int callCardInvalid(void)
{
    printf("INVALID\n");
    return false;
}

int checkIfCardIsValid(long creditCardNumber, int creditCardNumberLength)
{
    char creditCardNumberString[50];
    snprintf(creditCardNumberString, 50, "%ld", creditCardNumber);

    int creditCardNumberSum = 0;
    int firstSum = 0;
    int secondSum = 0;

    for (int i = creditCardNumberLength; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            int currentCardNum = CharToInt(creditCardNumberString[i]);
            int multipliedCurrentNum = currentCardNum * 2;
            int summedMultipliedCurrentNum = sumTheDouble(multipliedCurrentNum);

            printf("currentCardNum: %i\n", currentCardNum);
            printf("multipliedCurrentNum: %i\n", multipliedCurrentNum);
            printf("summedMultipliedCurrentNum: %i\n", multipliedCurrentNum);

            creditCardNumberSum += summedMultipliedCurrentNum;
            firstSum +=summedMultipliedCurrentNum;
        }
        else
        {
            int currentCardNum = CharToInt(creditCardNumberString[i]);
            printf("currentCardNum: %i\n", currentCardNum);
            creditCardNumberSum += currentCardNum;
            secondSum += currentCardNum;
        }
    }

    int lastDigitOfCreditCardNumberSum = creditCardNumberSum % 10;

    if (lastDigitOfCreditCardNumberSum == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    long int creditCardNumber = get_long("What's your card number? \n");
    long creditCardNumberForLength = creditCardNumber;
    int creditCardNumberLength = 0;

    do
    {
        creditCardNumberLength++;
        creditCardNumberForLength /= 10;
    }
    while (creditCardNumberForLength != 0);

    if (creditCardNumberLength <= 16 && creditCardNumberLength >= 13)
    {
        bool cardIsValid = checkIfCardIsValid(creditCardNumber, creditCardNumberLength);
        if (cardIsValid)
        {
            string cardProvide = GetCardProvider(creditCardNumber);
            printf("%s", cardProvide);
        }
        else
        {
            callCardInvalid();
        }
    }
    else
    {
        callCardInvalid();
    }
}
