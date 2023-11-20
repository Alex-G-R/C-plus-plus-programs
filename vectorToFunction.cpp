#include <iostream>
#include <vector>

void print_vector(std::vector<int> data)
{
    for(int i = 0; i < data.size(); i++){
        std::cout<< data[i] << " " << std::endl;
    }
}

/* If you want to do changes to original vector use &data in arguments */

int main() 
{

    std::vector<int> data = {0, 1, 2};
    
    data.push_back(4);
    print_vector(data);

    data.pop_back();
    print_vector(data);


    return 0;
}