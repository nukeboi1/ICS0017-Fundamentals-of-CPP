#include <iostream>;
using namespace std;
int main() {
int n;
cin >> n;
int result;
for (int i = 6; i <= 9; i++) {
	result = n * i;
	cout << n << " * " << i << " = " << result << endl;
}
return 0;
}