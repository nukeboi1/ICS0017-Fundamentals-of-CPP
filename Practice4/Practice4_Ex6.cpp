#include <iostream>
using namespace std;

class Person {
public:
	virtual void activity() {
		cout << "Human activity" << endl;
	}
};
class Programmer : public Person {
public:
	void activity() {
		cout << "Coding" << endl;
	}
};
int main() {
	Programmer prog;
	Person* pt;
	pt = &prog;
	pt->activity();
	return 0;
}