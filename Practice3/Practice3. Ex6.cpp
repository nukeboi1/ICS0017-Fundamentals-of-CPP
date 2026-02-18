#include <iostream>
using namespace std;

class Student {
public:
	double papers[3] = { 0.0, 0.0, 0.0 };
	double total_marks = 0.0;
	double average_marks = 0.0;
	void check_pass_fail() {
		for (int i = 0; i < 3; i++) {
			total_marks += papers[i];
		}

		average_marks = total_marks / 3;
		if (average_marks >= 40) {
			cout << "pass" << endl;
		}
		else
		{
			cout << "fail" << endl;
		}
	}
};
int main() {
	Student student;
	for (int i = 0; i < 3; i++) {
		cin >> student.papers[i];
	}
	student.check_pass_fail();
	return 0;
}