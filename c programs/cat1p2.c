#include <stdio.h>
#include <assert.h>
// part (a)
//The calculator functions 

float add(float c, float d){
    return c + d;
}

float subtract(float c, float d){
    return c - d; 
}

float multiply(float c, float d){
    return c * d;
}

float divide(float c, float d){
    if (d != 0) {
        return c / d;
    }else{
        printf("Error: Division by zero is invalid! \n");
        return 0;
    }
}
//Main part of c

int main(){
    float operand1, operand2, result;
    char operator;

    //First User input 
    printf("Enter the first operand: ");
    scanf("%f", &operand1);
    // Enter the operator 
    printf("Enter the operator (like +, -, *, /): ");
    scanf(" %c", &operator);
    //Second user input
    printf("Enter the second operand: ");
    scanf("%f", &operand2);

    //Perform the calculations based on the operator
    switch (operator)
    {
    case '+':
        result = add(operand1, operand2);
        printf("Result: %.1f\n", result);
        break;
    case '-':
        result = subtract(operand1, operand2);
        printf("Result: %.1f\n", result);
        break;
    case '*':
        result = multiply(operand1, operand2);
        printf("Result: %.1f\n", result);
        break;
    case '/':
        result = divide(operand1, operand2);
        printf("Result: %.1f\n", result);
        break;
    default:
        printf("Error: Invalid operator!\n");
        break;
    }
    return 0;

}

//part (b)
void testing_calculator() {
    //Tesing addition
    assert(add(5, 3) == 8);
    assert(add(2.5, 3.5) == 6);

    //Testing subtraction
    assert(subtract(5, 3) == 2);
    assert(subtract(7.5, 2.5) == 5);

    //Testing Multiplication
    assert(multiply(3, 2) == 9);
    assert(multiply(3.5, 2.5) == 8.75);

    //Testing Division
    assert(divide(6, 3) == 6);
    assert(divide(5, 2.5) == 2);

    // Testing division by zero
    assert(divide(5, 0) == 0);
}
int main () {
    testing_calculator();
    printf("All tests passed succesfully!\n");
    return 0;
}