#include <iostream>
using namespace std;

struct Person {
	int id;
	string name;
};
class Repo { //i'm not typing allat
public:
	Person* data;
	int count;
	int capacity;

	Repo() {
		capacity = 4;
		count = 0;
		data = new Person[capacity];
		cout << "Repo created" << endl;
	}
	~Repo() {
		delete[] data;
		cout << "Repo destroyed" << endl;
	}
	void add(const Person& p) {
		if (count < capacity) {
			data[count++] = p;
		}
	}
};
int main() {
	{
		Repo repo;
		repo.add(Person{ 1, "A" });
		repo.add(Person{ 2, "B" });
		cout << "2 items added" << endl;
	}
	cout << "End of main" << endl;
}