#include <iostream>
using namespace std;
int main() {
	int numbers[] = { 3, 4, 5 };
	int array_size = sizeof(numbers) / sizeof(numbers[0]);
	int index;
	try {
		cin >> index;
		if (index < 0 || index >= array_size) {
			throw "Array is out of bounds.";
			cout << numbers[index];
		}
		cout << numbers[index];
	}
	catch (const char* msg) {
		cout << msg;
	}
	return 0;
}