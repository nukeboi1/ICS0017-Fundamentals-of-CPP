#include <iostream>
using namespace std;
int find_smallest(int arr[]) {
	int smallest = arr[0];
	for (int i = 1; i <= 4; i++) {
		if (arr[i] < smallest) {
			smallest = arr[i];
		}
	}
	return smallest;
}
int main() {
	int numbers[5] = { 55, 64, 45, 80, 65 };
	int smallest = find_smallest(numbers);
	cout << smallest;
	return 0;
}