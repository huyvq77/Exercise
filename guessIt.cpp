#include <iostream>
#include <cstdlib>
using namespace std;

int generateRandomNumber();
int getPlayerGuess();
void printAnswer(int guess, int secretNumber);
int numberOfGuess();
void playGuessIt();
int score(int count);

int main()
{
	int choice;
	do {
		playGuessIt();
		cout << "---------------------\n" << "Do you want to play again?\n"
		     << "Enter number 1 (Yes) or 2 (No)\n";
		cin >> choice;
	}
	while (choice == 1);
	cout << "Game Over\n";
}

int generateRandomNumber() {
	return rand() % 100+1;
}

int getPlayerGuess() {
	int guess;
	cout << "Enter your number: ";
	cin >> guess;
	return guess;
}

void printAnswer(int guess, int secretNumber) {
	if (guess > secretNumber) {
		cout << "Your number is too big." << endl;
	} else if (guess < secretNumber) {
		cout << "Your number is too small." << endl;
	} else {
		cout << "Congratulation! You win." << endl;
	}
}

void playGuessIt() {
	int secretNumber = generateRandomNumber();
	int guess;
	int count = 0;
	do {
		guess = getPlayerGuess();
		printAnswer(guess, secretNumber);
		count++;
	} while (guess != secretNumber);
	if (count > 1) cout << "You have guessed " << count << " times" << endl;
	else cout << "You have guessed only once. Congratulation!!!" << endl;
	cout << "---------------------\n" << "Your score: " << score(count) << endl;
}

int score (int count) {
	int maxScore = 10000;
	if (count == 1) return maxScore;
	else for (int i=1; i<=count; i++) {
			maxScore -= (2*(100-(i-1)));
		}
	return maxScore;
}
