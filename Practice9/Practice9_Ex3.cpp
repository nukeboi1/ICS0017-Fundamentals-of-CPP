#include <iostream>
using namespace std;
class Square {
protected:
	int side;
	friend class Area;
public:
	Square(int length) : side(length) {}
};
class Area {
public:
	int find_area(int len) {
		class Square square(len);
		return square.side * square.side;
	}
};
int main() {
	int side;
	cin >> side;
	Area area;
	cout << area.find_area(side) << endl;
	return 0;
}