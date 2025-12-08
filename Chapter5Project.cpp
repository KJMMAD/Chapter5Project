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
	int answer;

	cout << "Guess the number" << endl;
	cin >> answer;
	int attempt = 1;

	while (answer != rNum) {
		if (answer > rNum) {
			cout << "Your guess is higher than the number." << endl;
		}
		else if (answer < rNum) {
			cout << "You guess is lower than the number." << endl;
		}
		cout << "Guess again" << endl;
		cin >> answer;
		attempt = attempt + 1;
	}

	cout << "You guessed the number in " << attempt << " attempts! The number was " << rNum << endl;
	return 0;
}