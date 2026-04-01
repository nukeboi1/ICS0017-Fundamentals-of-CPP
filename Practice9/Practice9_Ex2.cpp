#include <iostream>
using namespace std;
class Circle {
protected:
	double radius;
	double pi = 3.14;
	friend double find_circumference(Circle);
public:
	Circle(double rad) {
		radius = rad;
	}
};
double find_circumference(Circle c) {
	return 2 * c.pi * c.radius;
}
int main() {
	double radius;
	cin >> radius;
	Circle circle(radius);
	cout << find_circumference(circle) << endl;
	return 0;
}