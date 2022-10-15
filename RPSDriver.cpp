#include <iostream>
#include "RPS.h"

using namespace std;

int main() {
	int choice1 = 0, choice2 = 0;
	RPS game;
	bool choiceV1 = true, choiceV2 = true;
	cout << "---------WELCOME TO ROCK PAPER SCISSORS---------" << endl;
	cout << "Please enter values between 0 and 2 for both players" << endl;
	cout << "Please enter choice for player 1: ";
	cin >> choice1;
	choiceV1 = game.validateInput(choice1);
	while (!choiceV1) {
		cout << "Invalid choice, please enter valid choice between 0 to 2: ";
		cin >> choice1;
		choiceV1 = game.validateInput(choice1);
	}
	game.initializePlayer1(choice1);
	cout << "Please enter choice for player 2: ";
	cin >> choice2;
	choiceV2 = game.validateInput(choice2);
	while (!choiceV2) {
		cout << "Invalid choice, please enter valid choice between 0 to 2: ";
		cin >> choice2;
		choiceV2 = game.validateInput(choice2);
	}
	game.initializePlayer2(choice2);
	cout << "Initializing each players" << endl;
	game.whosTheWinner();
 	return 0;
}