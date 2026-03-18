#include <iostream>
using namespace std;
class Person {
private:
	int id;
protected:
	int marks;
public:
	string name;
	void set_id(int i) {
		id = i;
	}
	int get_id() {
		return id;
	}
	void set_marks(int m) {
		marks = m;
	}
	int get_marks() {
		return marks;
	}
};
class Student : public Person {};
int main() {
	Student student;
	student.name = "Tom Araya";
	student.set_id(101);
	student.set_marks(97);
	cout << student.name << endl;
	cout << student.get_id() << endl;
	cout << student.get_marks() << endl;
	return 0;
}