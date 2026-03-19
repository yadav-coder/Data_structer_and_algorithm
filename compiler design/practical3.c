#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidUsername(char uname[])
{
    int i, len = strlen(uname);

    if(len < 5 || len > 15)
        return 0;

    if(!isalpha(uname[0]))   // must start with letter
        return 0;

    for(i = 0; uname[i] != '\0'; i++)
    {
        if(!isalnum(uname[i]))   // only letters & digits
            return 0;
    }
    return 1;
}

int isValidPassword(char pass[])
{
    int i;
    int upper=0, lower=0, digit=0, special=0;

    if(strlen(pass) < 8)
        return 0;

    for(i = 0; pass[i] != '\0'; i++)
    {
        if(isupper(pass[i])) upper = 1;
        else if(islower(pass[i])) lower = 1;
        else if(isdigit(pass[i])) digit = 1;
        else special = 1;
    }

    if(upper && lower && digit && special)
        return 1;
    else
        return 0;
}

int main()
{
    char username[30], password[30];

    printf("Enter Username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username,"\n")] = '\0';

    printf("Enter Password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password,"\n")] = '\0';

    if(isValidUsername(username))
        printf("\nUsername is VALID\n");
    else
        printf("\nUsername is INVALID\n");

    if(isValidPassword(password))
        printf("Password is STRONG and VALID\n");
    else
        printf("Password is WEAK / INVALID\n");

    return 0;
}
