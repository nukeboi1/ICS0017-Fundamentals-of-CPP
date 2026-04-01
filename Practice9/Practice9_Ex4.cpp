#include <iostream>
#include <string>
using namespace std;
class Person {
public:
	string name;
	int age;
	Person(string n, int a) : name(n), age(a) {}
	void greet() {
		cout << "Hello, " << name << ". Your age is " << age << "." << endl;
	}
};
int main() {
	string name;
	int age;
	getline(cin, name);
	cin >> age;
	Person person(name, age);
	person.greet();
	return 0;
}