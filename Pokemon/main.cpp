// main.cpp
#include <iostream>
#include <string>

// Task 1: Convert PokemonChoice to an enum class
enum class PokemonChoice {
    InvalidChoice, // For invalid selections
    Charmander,
    Bulbasaur,
    Squirtle
};

// Task 3: Create a PokemonType enum class for future use
enum class PokemonType {
    Fire,
    Electric,
    Water,
    Earth,
    Normal
};

int main() {
    // Variable to store the player's name
    std::string player_name;

    // Ask the player for their name
    std::cout << "Welcome, Trainer! Professor Oak here. What's your name? ";
    std::getline(std::cin, player_name);

    // Respond with a congratulatory message
    std::cout << "Congratulations, " << player_name << "! You're officially a Pokemon Trainer now—your adventure begins!" << std::endl;

    // Create chosen_pokemon variable, initialize to InvalidChoice
    PokemonChoice chosen_pokemon = PokemonChoice::InvalidChoice; // Task 2: Use scope resolution operator

    // Introduce the Pokemon options with Professor Oak's dialogue
    std::cout << "Now, " << player_name << ", let's choose your first Pokemon!" << std::endl;
    std::cout << "Here are your options:" << std::endl;
    std::cout << "1. Charmander - The fire type. A real hothead!" << std::endl;
    std::cout << "2. Bulbasaur - The grass type. Calm and collected!" << std::endl;
    std::cout << "3. Squirtle - The water type. Cool as a cucumber!" << std::endl;

    // Prompt the player to choose a Pokemon
    std::cout << "Enter 1 for Charmander, 2 for Bulbasaur, or 3 for Squirtle: ";
    int choice;
    std::cin >> choice;

    // Use a switch statement to assign the chosen Pokemon
    // Task 2: Fix compiler errors by using scope resolution operator
    switch (choice) {
        case 1:
            chosen_pokemon = PokemonChoice::Charmander;
            std::cout << "Professor Oak: A fiery choice! Charmander is yours!" << std::endl;
            break;
        case 2:
            chosen_pokemon = PokemonChoice::Bulbasaur;
            std::cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!" << std::endl;
            break;
        case 3:
            chosen_pokemon = PokemonChoice::Squirtle;
            std::cout << "Professor Oak: Splendid! Squirtle will keep you cool under pressure!" << std::endl;
            break;
        default:
            chosen_pokemon = PokemonChoice::Charmander; // Default to Charmander for invalid choices
            std::cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you… Charmander it is!" << std::endl;
            break;
    }

    // Concluding message to announce the chosen Pokemon
    std::cout << "Professor Oak: That’s it, " << player_name << "! You and your ";
    switch (chosen_pokemon) {
        case PokemonChoice::Charmander: // Task 2: Use scope resolution operator
            std::cout << "Charmander";
            break;
        case PokemonChoice::Bulbasaur:
            std::cout << "Bulbasaur";
            break;
        case PokemonChoice::Squirtle:
            std::cout << "Squirtle";
            break;
        default:
            std::cout << "Charmander"; // Shouldn't reach here due to prior default
            break;
    }
    std::cout << " are about to form an unstoppable bond! Take your first step into the vast world of Pokemon… Who knows what mysteries await you?" << std::endl;

    return 0;
}
