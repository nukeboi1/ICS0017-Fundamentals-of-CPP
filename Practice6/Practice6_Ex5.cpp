#include <iostream>
using namespace std;

class Polygon {
public:
	void display() {
		cout << "A Polygon is created" << endl;
	}
};
class Rectangle : public Polygon {};
class Triangle : public Polygon {};
int main() {
	Rectangle r1;
	r1.display();
	Triangle t1;
	t1.display();
	return 0;
}