#include "RPS.h"
#include <Windows.h>
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
		MessageBox(NULL, L"No one wins!", L"It's a tie!", MB_OK);
		return;
	}
	if (player1 == static_cast<int>(diffChoices::ROCK) && player2 == static_cast<int>(diffChoices::SCISSORS)) { // 0 and 2
		MessageBox(NULL, L"Player 1 Wins!", L"Who's the winner!", MB_OK);
		return;
	}
	if(player1 == static_cast<int>(diffChoices::SCISSORS) && player2 == static_cast<int>(diffChoices::ROCK)) { // 2 and 0
		MessageBox(NULL, L"Player 2 Wins!", L"Who's the winner!", MB_OK);
		return;
	}
	if (player1 == static_cast<int>(diffChoices::SCISSORS) && player2 == static_cast<int>(diffChoices::PAPER)) { //2 and 1
		MessageBox(NULL, L"Player 1 Wins!", L"Who's the winner!", MB_OK);
		return;
	}
	if(player1 == static_cast<int>(diffChoices::PAPER) && player2 == static_cast<int>(diffChoices::SCISSORS)) { // 1 and 2
		MessageBox(NULL, L"Player 2 Wins!", L"Who's the winner!", MB_OK);
		return;
	}
	if (player1 == static_cast<int>(diffChoices::PAPER) && player2 == static_cast<int>(diffChoices::ROCK)) { // 1 and 0
		MessageBox(NULL, L"Player 1 Wins!", L"Who's the winner!", MB_OK);
		return;
	}
	if (player1 == static_cast<int>(diffChoices::ROCK) && player2 == static_cast<int>(diffChoices::PAPER)) { // 0 and 1
		MessageBox(NULL, L"Player 2 Wins!", L"Who's the winner!", MB_OK);
		return;
	}
}
