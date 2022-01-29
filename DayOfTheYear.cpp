#include <iostream>
#include <string>
using namespace std;

class DayOfYear {
private: 
	int day;
	//static string months[12];
	//static int numDays[12];

	int xMonth = 0;
public:
	DayOfYear(int xDay) {
		if (xDay < 1 || xDay > 365) {
			cout << "Please re-enter a number from 1-365";
			exit(0);
		}
		else {
			day = xDay;
		}
	}
	void print() {
		for (int counter = 0; counter < 12; counter++) {
			if (day <= numDays[counter])
				break;
			else {
				day -= numDays[counter];
				xMonth++;
			}
		}
		cout << months[xMonth] << day << endl;
	}

	 string months[12] = { "January ", "February ", "March" , "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int numDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

};

int main() {
	int userDay;
	cout << "This program converts a day given by a number 1 through 365 into a month and a day" << endl;
	cout << "Enter a number: " << endl;
	cin >> userDay;
	DayOfYear dayNum(userDay);
	dayNum.print();
	system("pause");
}