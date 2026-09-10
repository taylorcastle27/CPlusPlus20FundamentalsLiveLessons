// Conditional Operator (?:)
// - Conditional operator (?:) can be used in place of an if...else statement
// - C++'s only ternary operator
//
// Syntax: condition ? expression_if_true : expression_if_false;

#include <iostream>

int main() {
    int a = 10;
    int b = 20;
    int max = (a > b) ? a : b;
    std::cout << "The maximum value is " << max << std::endl;

    int studentGrade = 59;
    std::cout << (studentGrade >= 60 ? "Passed" : "Failed") << std::endl;

    int studentGrade2 = 60;
    std::cout << (studentGrade2 >= 60 ? "Passed" : "Failed") << std::endl;

    // While Iteration Statement
    // - A while loop repeats its block while the condition remains true.
    // - The condition is checked before each iteration.
    // - If the condition is false initially, the loop body never executes.
    // - This is useful when the number of repetitions is not known in advance.
    //
    // Example: Start at 3 and multiply by 3 until the value exceeds 100.
    // Sequence: 3, 9, 27, 81, 243
    // The loop stops once product becomes 243 because 243 <= 100 is false.
    
    int product{3};
    std::cout << "Product sequence: ";

    while (product <= 100) {
        std::cout << product << ' ';
        product = 3 * product;
    }

    std::cout << "\nLoop ended because product is now " << product << std::endl;

    return 0;
}