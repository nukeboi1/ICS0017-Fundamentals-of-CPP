#include <iostream>
using namespace std;

class Rectangle {
public:
	static int length, breadth;
};
//define the static variables
int Rectangle::length;
int Rectangle::breadth;
int main() {
	cin >> Rectangle::length >> Rectangle::breadth;
	cout << Rectangle::length * Rectangle::breadth << endl;
	return 0;
}