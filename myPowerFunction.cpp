#include <iostream>

using std::cout;
using std::cin;


double power(double, int);


int main() {

    int x;
    int y;

    cout << "Please provide me with the first number: "; cin >> x;
    cout << "Please provide me with the second number: "; cin >> y;

    double myPower = power(x, y);

    cout << "The result of putting the "<< x << " to the power of " << y << " is: " << myPower << std::endl;

    return 0;
}

double power( double base, int exponent ) {

    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }

    return result;
}