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

#include <iostream>
using namespace std;

int main() {
  cout << "Welcome to the world of Pokémon! I am Professor Oak.\n";
	cout << "You can choose one of the following Pokémon:\n";
	cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
	cout << "Which Pokémon would you like to choose? Enter the number: ";

	int choice;
	cin >> choice;
    
    if (choice == 1) {
        cout << "You chose Bulbasaur! A wise choice.\n";
    } 
    else if (choice == 2) {
        cout << "You chose Charmander! A fiery choice.\n";
    } 
    else if (choice == 3) {
        cout << "You chose Squirtle! A cool choice.\n";
    } 
    else {
        cout << "Invalid choice. Please restart the game.\n";
    }
    
    return 0;
}
