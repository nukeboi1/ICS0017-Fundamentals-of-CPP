#include <iostream>
using namespace std;
class Polygon {
	virtual double area() = 0;
};
class Triangle : public Polygon {
public:
	double base, height;
	Triangle(double base, double height) : base(base), height(height) {}
	double area() {
		return 0.5 * base * height;
	}
};
class Rectangle : public Polygon {
public:
	double length, breadth;
	Rectangle(double l, double b) {
		length = l;
		breadth = b;
	}
	double area() {
		return length * breadth;
	}
};
int main() {
	double base, height, length, breadth;
	cin >> base >> height >> length >> breadth;
	Triangle t1(base, height);
	Rectangle r1(length, breadth);
	double area_triangle = t1.area();
	double area_rectangle = r1.area();
	cout << area_triangle << endl << area_rectangle;
	return 0;
}
