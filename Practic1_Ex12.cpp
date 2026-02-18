#include <iostream>;
using namespace std;
int main() {
	switch (day_code) {
	case 1:
		cout << "Monday";
	case 2:
		cout << "Tuesday";
	case 3:
		cout << "Wednesday";
	case 4:
		cout << "Thursday";
	case 5:
		cout << "Friday";
	case 6:
		cout << "Saturday";
	case 0:
		cout << "Sunday";
	default:
		cout << "Error - illegal day code";
	}
	return 0;
}