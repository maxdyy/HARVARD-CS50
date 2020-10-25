#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{

    // Handle if there is no arguments or there are too many
    if (!argv[1] || argv[2])
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Check if the provided argument is all integers
    string argument = argv[1];
    int argLength = strlen(argument);

    for (int i = 0; i < argLength; i++)
    {
        bool isArgCharDigit = isdigit(argument[i]);

        if (isArgCharDigit == false)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // If the provided key is a number ask for the string to encrypt
    string plainText = get_string("plaintext: ");

    // Print the text block "ciphertext"
    printf("ciphertext: ");


    // Loop trough all letters in the provided text
    int key = atoi(argv[1]);
    int plainTextLength = strlen(plainText);
    for (int i = 0; i < plainTextLength; i++)
    {
        // Check if it is a lowercase char between a and z
        if (plainText[i] >= 'a' && plainText[i] <= 'z')
        {
            char encryptedChar = (((plainText[i] - 'a') + key) % 26) + 'a';
            printf("%c", encryptedChar);
        }
        else if (plainText[i] >= 'A' && plainText[i] <= 'Z') // if it is a uppercase char between A and Z
        {
            char encryptedChar = (((plainText[i] - 'A') + key) % 26) + 'A';
            printf("%c", encryptedChar);
        }
        else // Print other characters without encrypting
        {
            printf("%c", plainText[i]);
        }
    }
    printf("\n");
    return 0;
}