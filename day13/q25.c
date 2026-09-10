/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (operator) {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;

        case '-':
            printf("Result = %d\n", num1 - num2);
            break;

        case '*':
            printf("Result = %d\n", num1 * num2);
            break;

        case '/':
            if (num2 == 0) {
                printf("Division by zero is not possible.\n");
            }
            else {
                printf("Result = %.2f\n", (float)num1 / num2);
            }
            break;

        case '%':
            if (num2 == 0) {
                printf("Modulus by zero is not possible.\n");
            }
            else {
                printf("Result = %d\n", num1 % num2);
            }
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}