#include <iostream>;
using namespace std;

int main() {
	cout << "Your year:";
	int year;
	cin >> year;
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) {
		cout << endl << "Yep, that's a leap year.";
	}
	else {
		cout << endl << "Nope, that's not a leap year.";
	}
}