#include <iostream>;
using namespace std;
int main() {
int result = 0;
int number;
while (1) {
	cout << "Enter a number: ";
	cin >> number;
	if (number == 0) {
		break;
	}
	if (number > 0) {
		result = result + number;
	}
}
cout << "Result: " << result;
return 0;
}