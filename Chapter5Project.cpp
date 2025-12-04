#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//There should be a bar chart of at least 2 asterisks and a bar chart of at most 18 asterisks
	ifstream listFile("C:\\Users\\cmmsk\\Downloads\\People.txt");

	if (!listFile) {
		cerr << "Error opening file!" << endl;
		return 1;
	}

	int list, num;
	int year = 1900;

	while (listFile >> list) {
		string bar;
		num = list/1000;
		for (int i = 0; i < num; i++) {
			bar += "*";
		}
		cout << year << " " << list << bar << endl;
		year += 20;
	}


	listFile.close();
	cout << ".";
}