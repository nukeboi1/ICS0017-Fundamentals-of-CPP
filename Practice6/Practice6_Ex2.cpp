#include <iostream>
#include <string> //for getline
using namespace std;

class Greeting {
public:
	void greet(const string& name) {
		cout << "Hello " << name << endl;
	}
};
class Local_Greeting : public Greeting {
public:
	void greet(const string& name) {
		cout << "Namaste " << name << endl;
	}
};
int main() {
	string name;
	getline(cin, name);
	Greeting g1;
	g1.greet(name);
	Local_Greeting g2;
	g2.greet(name);
	return 0;
}