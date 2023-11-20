#include <iostream>
#include <fstream>
#include <vector>


int main(){

    std::ofstream file ("hello.txt", std::ios::app);

    if(file.is_open()){
        std::cout << "file opened successfully! \n";
    } else {
        std::cout << "That's a hard error here! \n";
        return -1;
    }

    std::vector<std::string> names;

    names.push_back("Alex");
    names.push_back("James");
    names.push_back("Jimmy");
    names.push_back("Ton");
    names.push_back("Jerry");
    names.push_back("Cherry");
    names.push_back("Rose");
    names.push_back("Mia");
    names.push_back("Chloe");

    for( std::string n : names) {
        file << n << "\n";
    }

    file.close();
    return 0;
}