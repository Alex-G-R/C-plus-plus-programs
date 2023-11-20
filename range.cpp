#include <iostream>
#include <vector>
#include <array>

int main() 
{
    int data[] = {1, 2, 3, 4, 5, 6};

    // Range based for loop
    for(int n : data){
        std::cout << n << " ";
    }
    std::cout << "\n";


    std::vector<int> vector_data = {7, 8, 9, 0, 1, 2};

    for(int n : vector_data){
        std::cout << n << " ";
    }
    std::cout << "\n";



    return 0;
}