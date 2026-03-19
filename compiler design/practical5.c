#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
 
int i = 0; 
char input[50]; 
 
// Function declarations 
void E(); 
void E1(); 
void T(); 
void T1(); 
void F(); 
 
// Match function 
void match(char expected) 
{ 
    if (input[i] == expected) 
        i++; 
    else 
    { 
        printf("\nSyntax Error\n"); 
        exit(0); 
    } 
} 
 
// Grammar rules 
 
// E → T E' 
void E() 
{ 
    T(); 
    E1(); 
} 
 
// E' → + T E' | ε 
void E1() 
{ 
    if (input[i] == '+') 
    { 
        match('+'); 
        T(); 
        E1(); 
    } 
} 
 
// T → F T' 
void T() 
{ 
    F(); 
    T1(); 
} 
 
// T' → * F T' | ε 
void T1() 
{ 
    if (input[i] == '*') 
    { 
        match('*'); 
        F(); 
        T1(); 
    } 
} 
 
// F → (E) | id 
void F() 
{ 
    if (input[i] == '(') 
    { 
        match('('); 
        E(); 
        match(')'); 
    } 
    else if (input[i] == 'i' && input[i + 1] == 'd') 
    { 
        match('i'); 
        match('d'); 
    } 
    else 
    { 
        printf("\nSyntax Error\n"); 
        exit(0); 
    } 
} 
 
// Main function 
int main() 
{ 
    printf("Enter the input string: "); 
    scanf("%s", input); 
 
    E(); 
 
    if (input[i] == '\0') 
        printf("\nParsing Successful \n"); 
    else 
        printf("\nSyntax Error \n"); 
   return 0; 
}