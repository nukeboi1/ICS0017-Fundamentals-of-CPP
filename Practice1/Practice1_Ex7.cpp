#include <iostream>;
using namespace std;
int main() {
	double km, miles;
	cout << "Enter the distance in kilometers: ";
	cin >> km; //takes user input
	miles = km * 0.621; // converts km to miles
	cout << endl << "Distance in miles: " << miles; // prints the result
	return 0;
}