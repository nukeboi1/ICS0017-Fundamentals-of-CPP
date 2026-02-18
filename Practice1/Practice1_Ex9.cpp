#include <iostream>;
using namespace std;
int main() {
	int number = 9;
	int result;
	for (int i = 1; i <= 5; i++) {
		result = number * i;
		cout << number << " * " << i << " = " << result << endl;
	}
return 0;
}