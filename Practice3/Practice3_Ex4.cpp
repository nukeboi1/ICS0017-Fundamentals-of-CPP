#include <iostream>
using namespace std;
class Person {
public:
	string name;
	Person(string argument) {
		argument = name;
	}
};
int main() {
	Person person;
	cout << person.name;
	return 0;
}