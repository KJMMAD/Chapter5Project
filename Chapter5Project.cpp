#include <iostream>
#include <fstream>
using namespace std;

int main()
{
//Line up should look like: front Barb, back Zev
	ifstream listFile("C:\\Users\\cmmsk\\Downloads\\LineUp.txt");
	if (!listFile) {
		cerr << "Error opening file!" << endl;
		return 1;
	}

	string list, first, last;
	int studentNum = 0;
	while (listFile >> list) {
		first = list;
		last = list;
		if (list < last) {
			last = list;
		}
		else if (list > first) {
			first = list;
		}
		studentNum = studentNum++;
	}
	cout << "There are " << studentNum << " students in the class. " << first << " should be the first in line, and " << last << " should be in the back of the line.";
}