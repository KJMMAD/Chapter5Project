#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int pStart, pFinal,t; //t=days
	float incRate;
	cout << "How many organisms are in the population to start with?";
	//pFinal = pStart(e)^rt for population growth
	cin >> pStart;
	if (pStart < 2) {
		cout << "The population must be greater or equal to 2.";
		return 0;
	}

	cout << "At what rate will the population increase?";
	cin >> incRate;
	if (incRate <= 0) {
		cout << "This program only calculates an increase in population, please select a number greater than 0";
		return 0;
	}

	cout << "How many days will the organisms multiply?";
	cin >> t;
	if (t < 1) {
		cout << "The number of days must be greater than 1.";
		return 0;
	}

	for (int i = 1; i <= t; i++) {
		cout << "Population for day " << i;
		pFinal = pStart * exp(incRate * i);
		cout << " " << pFinal << "\n";
	}
}