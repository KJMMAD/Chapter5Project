#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
//Line up should look like: front Barb, back Zev
	ifstream listFile("C:\\Users\\cmmsk\\Downloads\\LineUp.txt");
	if (!listFile) {
		cerr << "Error opening file!" << endl;
		return 1;
	}

	vector<string> names;
	string list, front, back;
	int studentNum = 0;

	while (listFile >> list) {
		names.push_back(list);
		studentNum = studentNum++;
	}
	front = names[0];
	back = names[0];

	for (int i = 0; i < names.size(); i++) {
		if (names[i] > back) {
			back = names[i];
		}
		else if (names[i] < front) {
			front = names[i];
		}
	}

	listFile.close();
	cout << "There are " << studentNum << " students in the class. " << front << " should be in the front of the line, and " << back << " should be in the back of the line.";
}