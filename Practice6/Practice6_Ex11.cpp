#include <iostream>
using namespace std;
template <typename T>
class Student {
public:
	// create generic array
	T marks[2];
	Student(T m1, T m2) {
		marks[0] = m1;
		marks[1] = m2;
	}
	T calculate_average() {
		return (marks[0] + marks[1]) / 2;
	}
};
int main() {
	int marks_int[2];
	double marks_double[2];
	cin >> marks_int[0] >> marks_int[1];
	cin >> marks_double[0] >> marks_double[1];
	Student<int> student_int(marks_int[0], marks_int[1]);
	Student<double> student_double(marks_double[0], marks_double[1]);
	int average_int = student_int.calculate_average();
	double average_double = student_double.calculate_average();
	cout << average_int << endl;
	cout << average_double << endl;
	return 0;
}