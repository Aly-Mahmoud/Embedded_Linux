#include "./Include/math_operations.h"

int main() {
    int num1 = 10, num2 = 5;

    // Using the functions
    int result_add = add(num1, num2);
    int result_subtract = subtract(num1, num2);
    int result_multiply = multiply(num1, num2);

    // Check for division by zero
    float result_divide = 0;
    if (num2 != 0) {
        result_divide = divide(num1, num2);
    } else {
        result_divide=-1 ;
    }

    // Check for modulus by zero
    int result_modulus = 0;
    if (num2 != 0) {
        result_modulus = modulus(num1, num2);
    } else {
        result_divide=-1 ;
    }
}
