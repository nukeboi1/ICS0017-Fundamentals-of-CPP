// copypasting from pdf is broken so:
#include <iostream>
using namespace std;
void add_numbers(double n1, double n2) {
	double result = n1 + n2;
	cout << result;
}
int main() {
	double number1;
	double number2;
	cin >> number1 >> number2;
	add_numbers(number1, number2);
}