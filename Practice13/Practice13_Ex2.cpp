#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream in("text.txt");
	if (!in)
	{
		cerr << "Error opening file!" << endl;
		return 1;
	}
	string line;
	while (getline(in, line))
	{
		cout << line << endl;
	}
	return 0;
}