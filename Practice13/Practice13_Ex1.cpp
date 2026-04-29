#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream num("numbers.txt");
	if (!num)
	{
		cout << "Error opening file!" << endl;
		return 1;
	}
	int sum = 0;
	int n;
	while (num >> n)
	{
		sum += n;
	}
	cout << sum;
}