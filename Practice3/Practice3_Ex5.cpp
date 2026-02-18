#include <iostream>
using namespace std;

class Triangle {
public:
	int base;
	int height;
	Triangle(int b, int h) {
		base = b;
		height = h;
	}
	double calculate_area() {
		double area = 0.5 * base * height;
		return area;
	}
};
int main() {
	int base, height;
	cin >> base >> height;
	Triangle triangle(base, height);
	double area = triangle.calculate_area();
	cout << area;
	return 0;
}