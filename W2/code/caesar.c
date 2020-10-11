#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


 int main(int argc, char* argv[])
 {
    // Check if the provided argument is all integers
    string argument = argv[1];
    int argLength = strlen(argument);

    for (int i = 0; i < argLength; i++)
    {
        bool isArgCharDigit = isdigit(argument[i]);

        if(isArgCharDigit == false)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // If the provided key is a number ask for the string to encrypt
    string plainText = get_string("plaintext:");

    printf("%s\n", plainText);
 }