#include <iostream>

using namespace std;

int main() {
    cout << "Please enter your first and last names and age\n";
    double ageInYears;
    double ageInMonths; // By default, a double is initialized to 0.0
    string firstName;
    string lastName;
    cin >> firstName >> lastName >> ageInYears;
    ageInMonths = ageInYears * 12;
    cout << "Hello, " << firstName << " " << lastName << "!\n";
    cout << "You are " << ageInMonths << " months old.\n";
    cout << "Goodbye, " << firstName << " " << lastName << "!\n";
    return 0;
}


/*
modify it to write out the age in number of months: 
read the input in years and multiply (using the * operator) by 12. 
Read the age into a double to allow for children who can be very proud of being five and a half years old rather than just five.


*/