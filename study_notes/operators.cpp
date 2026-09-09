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

    return 0;
}