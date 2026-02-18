#include <iostream>
using namespace std;
int main() {
	double numbers[5];
	//get input
	for (int i = 0; i < 5; ++i) {
		cin >> numbers[i];
	}
	double sum = 0.0;
	for (int i = 0; i < 5; i++) {
		sum += numbers[i];
	}
	double result = sum / 5;
	cout << result;
	return 0;
}