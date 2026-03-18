#include <iostream>
using namespace std;
enum names { Marcia, Hernando, Jose } name1;
int main() {
	enum names name2;
	name1 = Marcia;
	name2 = Jose;
	cout << name1 << endl << name2;
	return 0;
}