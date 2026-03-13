#include <iostream>
using namespace std;
class Triangle {
public:
	double base, height;
	Triangle(double base, double height) : base(base), height(height) {}
	friend class Area;
};
class Rectangle {
public:
	double length, breadth;
	Rectangle(double length, double breadth) : length(length), breadth(breadth) {}
	friend class Area;
};
class Area {
	public:
	double compute_area(Triangle triangle) {
		return 0.5 * triangle.base * triangle.height;
	}
	double compute_area(Rectangle rectangle) {
		return rectangle.length * rectangle.breadth;
	}
};
int main() {
	double base, height, length, breadth;
	cin >> base >> height >> length >> breadth;
	Triangle triangle(base, height);
	Rectangle rectangle(length, breadth);
	Area area;
	double area_triangle = area.compute_area(triangle);
	double area_rectangle = area.compute_area(rectangle);
	cout << area_triangle << endl << area_rectangle;
	return 0;
}