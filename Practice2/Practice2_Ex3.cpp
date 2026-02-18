#include <iostream>
using namespace std;
int main() {
	double arr[4] = { 3.5, 8.9, 1.6, -4.8 };
	for (double num : arr) {
		cout << num << endl;
	}
	return 0;
}