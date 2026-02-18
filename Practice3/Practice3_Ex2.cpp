#include <iostream>
using namespace std;
class Student {
	public:
	int marks;
};
int main() {
	Student student1, student2;
	cin >> student1.marks >> student2.marks;
	cout << student1.marks << endl;
	cout << student2.marks;
	return 0;
}