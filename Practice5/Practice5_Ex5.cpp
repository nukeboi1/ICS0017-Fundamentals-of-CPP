#include <iostream>
using namespace std;

class Triangle {
public:
	int base;
	int height;
	double calculate_area() {
		double area = 0.5 * base * height;
		return area;
	}
};
int main() {
	Triangle triangle1;
	Triangle* pt;
	pt = &triangle1;
	cin >> pt->base >> pt->height;
	double area = pt->calculate_area();
	cout << area << endl;
	return 0;
}