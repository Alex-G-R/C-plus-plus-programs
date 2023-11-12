#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main() {

    int x;
    int y;

    cout << "Hey, let's see the bad boy of a code in action! \n";

    cout << "Please provide me with the first number: "; cin >> x;
    cout << "Please provide me with the second number: "; cin >> y;


    cout << "The result of putting the "<< x << " to the power of " << y << " is: " << pow(x, y) << std::endl;

    return 0;
}