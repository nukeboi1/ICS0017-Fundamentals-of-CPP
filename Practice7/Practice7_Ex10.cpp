#include <iostream>
using namespace std;
class Student {
public:
	double marks;
	Student(double m) : marks(m) {}
};
int calculate_average(Student s1, Student s2) {
	return (s1.marks + s2.marks) / 2;
}
int main() {
	double marks1, marks2;
	cin >> marks1 >> marks2;
	Student student1(marks1), student2(marks2);
	double average = calculate_average(student1, student2);
	cout << average << endl;
	return 0;
}