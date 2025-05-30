// pokemon_selection.cpp
#include <iostream>
#include <string>

int main() {
    // Variable to store the player's name
    std::string player_name;

    // Ask the player for their name
    std::cout << "Welcome, Trainer! Professor Oak here. What's your name? ";
    std::getline(std::cin, player_name); // Use getline to handle names with spaces

    // Respond with a personalized congratulatory message
    std::cout << "Congratulations, " << player_name << "! You're officially a Pokemon Trainer now—your adventure begins!" << std::endl;

    return 0;
}
