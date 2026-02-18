#include <iostream>
#include <string>
using namespace std;
struct Employee {
	int age;
	string name;
};
int main() {
	Employee employee1;
	getline(cin, employee1.name);
	cin >> employee1.age;
	cout << employee1.name << endl;
	cout << employee1.age;
	return 0;
}