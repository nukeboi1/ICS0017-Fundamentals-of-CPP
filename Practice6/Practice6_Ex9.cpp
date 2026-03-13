#include <iostream>
using namespace std;

class Complex_Number {
public:
	double real, imag;
	Complex_Number(double r, double i) {
		real = r;
		imag = i;
	}
	friend Complex_Number add_complex(Complex_Number c1, Complex_Number c2);
};

Complex_Number add_complex(Complex_Number c1, Complex_Number c2) {
	Complex_Number result(0.0, 0.0);
	result.real = c1.real + c2.real;
	result.imag = c1.imag + c2.imag;
	return result;
}
int main() {
	double n1, n2, n3, n4;
	cin >> n1 >> n2 >> n3 >> n4;
	Complex_Number c1(n1, n2);
	Complex_Number c2(n3, n4);
	Complex_Number result(0.0, 0.0);
	result = add_complex(c1, c2);
	cout << result.real << " + " << result.imag << "i" << endl;
	return 0;
}