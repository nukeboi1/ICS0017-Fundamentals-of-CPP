#include <iostream>
using namespace std;
int main() {
	int numbers[5] = { 64, 55, 75, 80, 65 };
	int* pt = numbers;
	int smallest = *pt;
	for (int i = 1; i <= 4; i++) {
		if (*(pt + i) < smallest) {
			smallest = *(pt + i);
		}
	}
	cout << smallest;
}