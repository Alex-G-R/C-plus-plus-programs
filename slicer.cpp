#include <iostream>

using std::cout;
using std::cin;

int main() 
{
    int slices;

    cout << "How many slices of pizza do you want? ";
    cin >> slices;

    if( slices > 20 ){
        cout << "Yo you fatty! We do not have that much! \n";
    } else if (slices < 20 && slices > 0){
        cout << "Aight, we can do that G, wait for them. \n";
    } else if (slices < 0) {
        cout << "Nice, you want negative pizza slices? Think bout yourself. \n";
    } else if (slices == 0) {
        cout << "Zero slices coming your way! \n";
    } else {
        cout << "Not that sure what you did buddy but you broke the slicer, to later. \n";
    }

    return 0;
}