#include <stdio.h>
#include <assert.h>
#include <math.h>
//calculator functions
double add(double a, double b) {
    return a + b;
}
double subtract(double a, double b) {
    return a - b;
}
double multiply(double a, double b ) {
    return a * b;
}
double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero is invalid. \n");
        return 0;
        //You can choose to handle the error differently
        
    }else {
            return a / b;
        }
}
/**
 * This is the main C program.
 */
int main(){
    double a, b, result;
    char operator;
    //call the testing function
    //testing_calc();

    //calculator functionality
    printf("Enter on expression (for example 4+5): ");
    scanf("%lf %c %lf", &a, &operator, &b);

    switch (operator)
    {
    case '+':
        result = add(a, b);
        break;
    case '-':
        result = subtract(a, b);
        break;
    case '*':
        result = multiply(a, b);
        break;
    case '/':
        result = divide(a, b);
        break;    
    default:
        printf("Invalid operator. Please Try again! \n");
        return 1;
    }
    printf("Result: %.2f\n", result);
    return 0;
    
}



//Function to compare floating-point numbers with a small espilon
int is_close(double x, double y, double epsilon){
    return fabs(x - y) < epsilon;
}



// Function to run tests using assert

void testing_calc(){
    //test addition
    assert(is_close(add(3, 2), 5, 0.0001));
    assert(is_close(add(1.5, 2.5), 4, 0.0001));

    //test subtraction
    assert(is_close(subtract(5, 2), 3, 0.0001));
    assert(is_close(subtract(2, 5), -3, 0.0001));

    //test multiplication
    assert(is_close(multiply(3, 2), 6, 0.0001));
    assert(is_close(multiply(1.5, 2), 3, 0.0001));

    //test division
    assert(is_close(divide(10, 2), 5, 0.0001));
    assert(is_close(divide(5, 2), 2.5, 0.0001));

    //test to divide by zero
    assert(divide(5, 0) == 0); //we expect an error here and 0 return value
    printf("All tests passed successfully!\n");
}





