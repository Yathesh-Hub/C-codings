#include <stdio.h>
int main() {
    float n1, n2, result;
    char operation;

    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);

    printf("Choose operation :");
    scanf(" %c", &operation);

    switch(operation) {
        case '+':
            result = n1 + n2;
            printf("Addition result: %.2f\n", result);
            break;
        case '-':
            result = n1-n2;
            printf("Subtraction result: %.2f\n", result);
            break;
        case '*':
            result = n1*n2;
            printf("Multiplication result: %.2f\n", result);
            break;
        case '/':
            if (n2 != 0) {
                result = n1/n2;
                printf("Division result: %.2f\n", result);
            } else {
                printf("Cannot divide by zero.\n");
            }
            break;
        case '%':
            result = (int)n1%(int)n2;
            printf("Modulus result: %.2f\n", result);
            break;
        case '^':
            result = n1*n1;
            printf("Square of %f is %.2f\n", n1, result);
            break;
        default:
            printf("Invalid operation.\n");
    }

    return 0;
}

