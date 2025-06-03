// pokemon_selection.cpp
#include <iostream>
#include <string>

// Step 1: Create an enum to represent Pokemon options
enum PokemonChoice {
    InvalidChoice, // For invalid selections
    Charmander,
    Bulbasaur,
    Squirtle
};

int main() {
    // Variable to store the player's name
    std::string player_name;

    // Ask the player for their name
    std::cout << "Welcome, Trainer! Professor Oak here. What's your name? ";
    std::getline(std::cin, player_name);

    // Respond with a congratulatory message
    std::cout << "Congratulations, " << player_name << "! You're officially a Pokemon Trainer now—your adventure begins!" << std::endl;

    // Step 2: Create chosen_pokemon variable, initialize to InvalidChoice
    PokemonChoice chosen_pokemon = InvalidChoice;

    // Step 3: Introduce the Pokemon options with Professor Oak's dialogue
    std::cout << "Now, " << player_name << ", let's choose your first Pokemon!" << std::endl;
    std::cout << "Here are your options:" << std::endl;
    std::cout << "1. Charmander - The fire type. A real hothead!" << std::endl;
    std::cout << "2. Bulbasaur - The grass type. Calm and collected!" << std::endl;
    std::cout << "3. Squirtle - The water type. Cool as a cucumber!" << std::endl;

    // Prompt the player to choose a Pokemon
    std::cout << "Enter 1 for Charmander, 2 for Bulbasaur, or 3 for Squirtle: ";
    int choice;
    std::cin >> choice;

    // Step 4: Use a switch statement to assign the chosen Pokemon
    // Step 5: Default to Charmander for invalid choices
    switch (choice) {
        case 1:
            chosen_pokemon = Charmander;
            std::cout << "Professor Oak: A fiery choice! Charmander is yours!" << std::endl;
            break;
        case 2:
            chosen_pokemon = Bulbasaur;
            std::cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!" << std::endl;
            break;
        case 3:
            chosen_pokemon = Squirtle;
            std::cout << "Professor Oak: Splendid! Squirtle will keep you cool under pressure!" << std::endl;
            break;
        default:
            chosen_pokemon = Charmander; // Default to Charmander for invalid choices
            std::cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you… Charmander it is!" << std::endl;
            break;
    }

    // Step 6 (Bonus): Concluding message to announce the chosen Pokemon
    std::cout << "Professor Oak: That’s it, " << player_name << "! You and your ";
    switch (chosen_pokemon) { // Switch to display the final chosen Pokemon
        case Charmander:
            std::cout << "Charmander";
            break;
        case Bulbasaur:
            std::cout << "Bulbasaur";
            break;
        case Squirtle:
            std::cout << "Squirtle";
            break;
        default:
            std::cout << "Charmander"; // Shouldn't reach here due to prior default
            break;
    }
    std::cout << " are about to form an unstoppable bond! Take your first step into the vast world of Pokemon… Who knows what mysteries await you?" << std::endl;

    return 0;
}
