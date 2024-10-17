#include <stdio.h>
#include <assert.h>

// Calculator functions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int main() {
    float num1, num2;
    char operator;
    float result;

    // Get user input
    printf("Enter the first number: ");
    scanf("%f", &num1);
    
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform calculation based on operator
    switch (operator) {
        case '+':
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case '/':
            result = divide(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Error: Invalid operator!\n");
            break;
    }

    return 0;
}
