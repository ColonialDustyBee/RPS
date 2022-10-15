#include "RPS.h"
//#include <conio.h> // This will make inputs not appear., we'll comment this out for now
#include <iostream>

RPS::RPS() { }; // Maybe constructor should make it so
bool RPS::validateInput(int input) { // This will check for input.
	if (input < 0 || input > 2) {
		return false;
	}
	return true; // Return true.
}

void RPS::initializePlayer1(int input) {
	player1 = input;
}

void RPS::initializePlayer2(int input) {
	player2 = input;
}

void RPS::whosTheWinner() {
	// Lets do this pretty thing, shall we?
	std::cout << "Player 1 chose: " << choices[player1] << std::endl;
	std::cout << "Player 2 chose: " << choices[player2] << std::endl;
	if(player1 == player2){ // If there's a tie
		std::cout << "It's a tie!, no one wins!" << std::endl;
		return;
	}
	if (player1 == static_cast<int>(diffChoices::ROCK) && player2 == static_cast<int>(diffChoices::SCISSORS)) {
		std::cout << "Player 1 wins!";
		return;
	}
	else {
		std::cout << "Player 2 wins!" << std::endl;

	}
	if (player1 == static_cast<int>(diffChoices::SCISSORS) && player2 == static_cast<int>(diffChoices::PAPER)) {
		std::cout << "Player 1 wins!" << std::endl;
		return;
	}
	else {
		std::cout << "Player 2 wins!" << std::endl;
	}
	if (player1 == static_cast<int>(diffChoices::PAPER) && player2 == static_cast<int>(diffChoices::ROCK)) {
		std::cout << "Player 1 wins!";
	}
	else {
		std::cout << "Player 2 wins!" << std::endl;
	}
}