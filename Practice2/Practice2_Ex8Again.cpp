#include <iostream>
using namespace std;

int main() {
	string text = "Elden";
	string text2 = "Ring";
	string game = text + " " + text2;
	for (int i = 0; i <= game.length() - 1; ++i) {
		cout << game[i];
	}
	return 0;
}