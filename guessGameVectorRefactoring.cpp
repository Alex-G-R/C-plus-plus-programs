#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>

int main();

void print_array(std::vector<int> vector) {
    for (int i = 0; i < vector.size(); i++)
    {
        std::cout << vector[i] << " ";
    }
}

void guessGame(int anwser, std::vector<int> &guesses){

    std::cout << "Please provide your guess: \n";
    int guess;
    std::cin >> guess;


    if(guess == anwser){
        guesses.push_back(guess);
        std::cout << "Congratulations! You won in only " << guesses.size() << " guesses. \n";
        std::cout << "Guess history: "; print_array(guesses); std::cout << std::endl;
        main();
    } else if(guess > anwser){
        std::cout << "Your guess is too high, try again! \n";
        guesses.push_back(guess);

        guessGame(anwser, guesses);
    } else if(guess < anwser){
        std::cout << "Your guess is too low, try again! \n";
        guesses.push_back(guess);

        guessGame(anwser, guesses);
    }
}

int main(){

    srand(time(NULL));
    int anwser = rand() % 20 + 1;

    std::vector<int> guesses;
    
    std::cout << "| - - - - Main Menu - - - - | \n";
    std::cout << "|                           | \n";
    std::cout << "| 1 - Start a guess game    | \n";
    std::cout << "|                           | \n";
    std::cout << "| 2 - Quit the program      | \n";
    std::cout << "|                           | \n";
    std::cout << "|___________________________| \n";
    
    std::cout << "Please choose one option:  \n";
    int option;
    std::cin >> option;

    if(option == 1){
        std::cout << "You are now guessing a number betwen 1 and 20, good luck! \n";
        guessGame(anwser, guesses);
    } else if (option == 2){
        std::cout << "Shutting down the program. \n";
        return -1;
    } else {
        std::cout << "Option unaveliabale. \n";
        return -1;
    }
    

    return 0;
}