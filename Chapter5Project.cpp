#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
//Line up should look like: front Barb, back Zev
	ifstream listFile("C:\\Users\\cmmsk\\Downloads\\LineUp.txt");
	if (!listFile) {
		cerr << "Error opening file!" << endl;
		return 1;
	}

	string list;
	string back = "";
	string front = "";
	int studentNum = 0;

	while (listFile >> list) {
		if (list > back) {
			cout << list.compare(back) << endl;
			back = list;
			cout << back << "F" << endl;
		}
		else if (list < front) {
			cout << list.compare(front) << endl;
			front = list;
			cout << front << "B" << endl;
		}
		studentNum = studentNum++;
	}
	listFile.close();
	cout << "There are " << studentNum << " students in the class. " << front << " should be in the front of the line, and " << back << " should be in the back of the line.";
}