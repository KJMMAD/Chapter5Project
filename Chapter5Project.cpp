#include <iostream>
#include <random>
using namespace std;

int main()
{
	int min = 0;
	int max = 100;
	
	random_device generator;
	uniform_int_distribution<int>rVal(min, max);

	cout << "Generating random number" << endl;
	int rNum = rVal(generator);
	int attempts, answer;
	cout << "Guess the number" << endl;
	cin >> answer;
	while (answer != rNum) {

		if (answer > rNum) {
			cout << "Your guess is higher than the number." << endl;
		}
		else if (answer < rNum) {
			cout << "You guess is lower than the number." << endl;
		}
		cout << "Guess again" << endl;
		cin >> answer;
	}
	cout << "You guessed the number! It was " << rNum << endl;
	return 0;
}