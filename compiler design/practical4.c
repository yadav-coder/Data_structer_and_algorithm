#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

/* Push into stack */
void push(char c) {
    stack[++top] = c;
}

/* Pop from stack */
char pop() {
    return stack[top--];
}

int main() {
    char input[50];
    int i = 0;
    char x;

    printf("Enter the string (end with $): ");
    scanf("%s", input);

    /* Initialize stack */
    push('$');
    push('E');

    printf("\nStack\t\tInput\t\tAction\n");

    while (top != -1) {
        x = stack[top];

        printf("\n");
        for (int j = top; j >= 0; j--)
            printf("%c", stack[j]);

        printf("\t\t%s\t\t", &input[i]);

        /* Match terminal */
        if (x == input[i]) {
            pop();
            i++;
            printf("Match %c", x);
        }

        /* E -> T P */
        else if (x == 'E' && input[i] == 'i') {
            pop();
            push('P');   // E'
            push('T');
            printf("E -> T E'");
        }

        /* P -> + T P */
        else if (x == 'P' && input[i] == '+') {
            pop();
            push('P');
            push('T');
            push('+');
            printf("E' -> + T E'");
        }

        /* P -> ε */
        else if (x == 'P' && input[i] == '$') {
            pop();
            printf("E' -> ε");
        }

        /* T -> i */
        else if (x == 'T' && input[i] == 'i') {
            pop();
            push('i');
            printf("T -> id");
        }

        else {
            printf("ERROR");
            return 0;
        }
    }

    /* Final acceptance */
    if (input[i] == '$')
        printf("\n\nString Accepted!");
    else
        printf("\n\nString Rejected!");

    return 0;
}
