#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

int main();

void print_array(int array[], int count) {
    for (int i = 0; i < count; i++)
    {
        std::cout << array[i] << ", ";
    }
    std::cout << std::endl;
}

void guessGame(int anwser, int guess_count, int guesses[]){

    std::cout << "Please provide your guess: \n";
    int guess;
    std::cin >> guess;


    if(guess == anwser){
        guesses[guess_count] = guess;
        guess_count++;

        std::cout << "Congratulations! You won in only " << guess_count << " guesses. \n";
        std::cout << "Guess history: "; print_array(guesses, guess_count);
        main();
    } else if(guess > anwser){
        std::cout << "Your guess is too high, try again! \n";

        guesses[guess_count] = guess;
        guess_count++;

        guessGame(anwser, guess_count, guesses);
    } else if(guess < anwser){
        std::cout << "Your guess is too low, try again! \n";

        guesses[guess_count] = guess;
        guess_count++;

        guessGame(anwser, guess_count, guesses);
    }
}

int main(){

    srand(time(NULL));
    int anwser = rand() % 20 + 1;

    int guesses[20];
    int guess_count = 0;
    
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
        guessGame(anwser, guess_count, guesses);
    } else if (option == 2){
        std::cout << "Shutting down the program. \n";
        return -1;
    } else {
        std::cout << "Option unaveliabale. \n";
        return -1;
    }
    

    return 0;
}