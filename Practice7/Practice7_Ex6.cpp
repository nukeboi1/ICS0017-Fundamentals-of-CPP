#include <iostream>
using namespace std;
class Person {
protected:
	int marks;
public:
	string name;
};
class Student : public Person {
public:
	void set_name(string n) {
		name = n;
	}
	string get_name() {
		return name;
	}
	void set_marks(int m) {
		marks = m;
	}
	int get_marks() {
		return marks;
	}
};
int main() {
	Student student;
	student.set_name("Tom Araya");
	student.set_marks(97);
	cout << student.get_name() << endl;
	cout << student.get_marks() << endl;
	return 0;
}