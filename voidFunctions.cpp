#include <iostream>

using std::cout;
using std::cin;


double power(double, int);
void print_pow(double, int);

int main() {

    double base;
    double exponent;

    cout << "Please provide me with the first number: "; cin >> base;
    cout << "Please provide me with the second number: "; cin >> exponent;

    print_pow(base, exponent);

    return 0;
}

void print_pow(double base, int exponent){

    double myPower = power(base, exponent);
    cout << "The result of putting the "<< base << " to the power of " << exponent << " is: " << myPower << std::endl;

}

double power(double base, int exponent) {

    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }

    return result;
}