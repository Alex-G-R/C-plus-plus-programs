#include <iostream>
#include <fstream>
#include <vector>

int main() {

    std::ifstream file("test.txt");

    std::vector<std::string> names;

    std::string input;
    while( file >> input){
        names.push_back(input);
    }

    for(std::string n : names){
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}