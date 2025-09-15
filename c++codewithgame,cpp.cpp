#include <iostream>
#include <random>

void playGame() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 100);

    int secretNumber = distrib(gen);
    int guess;
    int attempts = 0;

    std::cout << "?? Welcome to the Number Guessing Game!\n";
    std::cout << "I'm thinking of a number between 1 and 100.\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "? Invalid input. Please enter a number.\n";
            continue;
        }

        attempts++;

        if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "?? Correct! You guessed it in " << attempts << " tries!\n";
        }

    } while (guess != secretNumber);
}

