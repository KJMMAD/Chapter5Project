#include <iostream>
using namespace std;

int main()
{
	int max;
	string patternA;
	cout << "Please enter a number greater than 1.";
	cin >> max;

	cout << "Pattern A" << endl;

	for (int i = 0; i < max; i++) {
		patternA += '+';
		cout << patternA << endl;
	}
	cout << "Pattern B" << endl;

	for (int i = max; i > 0; i--) {
		string patternB;
		for (int b = 0; b < i; b++) {
			patternB += '+';
		}
		cout << patternB << endl;
	}
}