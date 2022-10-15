#ifndef RPS_H
#define RPS_H
#include <string>
const int SIZE = 3;
class RPS
{
private:
	int player1 = 0; 
	int player2 = 0;
	std::string choices[SIZE] = { "Rock", "Paper", "Scissors" };
	enum class diffChoices { ROCK, PAPER, SCISSORS }; // Works to make stuff less wordy?
	// These should be private in the terms of making the game less cheat proof //
public:
	RPS();
	void initializePlayer1(int);
	void initializePlayer2(int);
	bool validateInput(int);
	void whosTheWinner();
};
#endif