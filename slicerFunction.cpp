#include <iostream>

using std::cout;
using std::cin;
using std::string;

string slicerFunction( int slices ) {
    if( slices > 20 ){
        return "Yo you fatty! We do not have that much! \n";
    } else if (slices < 20 && slices > 0){
        return "Aight, we can do that G, wait for them. \n";
    } else if (slices < 0) {
        return "Nice, you want negative pizza slices? Think bout yourself. \n";
    } else if (slices == 0) {
        return "Zero slices coming your way! \n";
    } else {
        return "Not that sure what you did buddy but you broke the slicer, to later. \n";
    }
}

int main() {
    int slices;

    cout << "How many slices of pizza do you want? ";
    cin >> slices;

    cout << slicerFunction(slices);

    return 0;
}