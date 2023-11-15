#include <iostream>

int main(){
    std::string string_val;

    std::cout << "provide a string value: ";
    getline(std::cin, string_val);
    
    std::cout << "you provided: " << string_val << std::endl;

    return 0;
}