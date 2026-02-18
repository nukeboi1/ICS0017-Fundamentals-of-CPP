#include <iostream>
using namespace std;
int main() {
	double numbers[5] = { 32.2, 43.5, 51.6, 11.3, 29.8 };
	double sum = 0;
	int size = sizeof(numbers) / sizeof(numbers[0]);
	for (int i = 0; i < size; i++) {
		sum += numbers[i];
	}
	double average = sum / size;
	cout << average;
	return 0;
}