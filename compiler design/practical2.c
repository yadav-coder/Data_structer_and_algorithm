#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[200];
    int i, digits = 0, vowels = 0, consonants = 0, symbols = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // safe input

    for(i = 0; str[i] != '\0'; i++)
    {
        if(isdigit(str[i]))
        {
            digits++;
        }
        else if(isalpha(str[i]))
        {
            char ch = tolower(str[i]);

            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
        else if(str[i] != '\n')   // avoid counting new line
        {
            symbols++;
        }
    }

    printf("\nDigits      : %d", digits);
    printf("\nVowels      : %d", vowels);
    printf("\nConsonants  : %d", consonants);
    printf("\nSymbols     : %d\n", symbols);

    return 0;
}
