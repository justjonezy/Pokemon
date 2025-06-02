// pokemon_selection.cpp
#include <iostream>
#include <string>

int main() {
    // Variable to store the player's name
    std::string player_name;

    // Ask the player for their name
    std::cout << "Welcome, Trainer! Professor Oak here. What's your name? ";
    std::getline(std::cin, player_name);

    // Respond with a congratulatory message
    std::cout << "Congratulations, " << player_name << "! You're officially a Pokemon Trainer now—your adventure begins!" << std::endl;

    // Variable to store the player's choice
    int choice;

    // Prompt the player to choose a Pokemon
    std::cout << "Now, " << player_name << ", let's choose your first Pokemon!" << std::endl;
    std::cout << "Enter 1 for Charmander, 2 for Bulbasaur, or 3 for Squirtle: ";
    std::cin >> choice;

    // Use a switch statement to handle the player's choice
    switch (choice) {
        case 1:
            std::cout << "Professor Oak: A fiery choice! Charmander is yours!" << std::endl;
            break;
        case 2:
            std::cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!" << std::endl;
            break;
        case 3:
            std::cout << "Professor Oak: Splendid! Squirtle will keep you cool under pressure!" << std::endl;
            break;
        default:
            std::cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you… Just kidding! Let's go with Pikachu, the surprise guest!" << std::endl;
            break;
    }

    return 0;
}
        cout << "Invalid choice. Please restart the game.\n";
    }
    
    return 0;
}
