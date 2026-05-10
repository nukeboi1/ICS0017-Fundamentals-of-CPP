#include <iostream>
using namespace std;

class IntRepo {
public:
	int* data;
	int count;
	int capacity;
	IntRepo(int cap = 5) {
		capacity = cap;
		count = 0;
		data = new int[capacity];
	}
	void add(int value) {
		if (count < capacity) {
			data[count++] = value;
		}
	}
	void removeAt(int index) {
		if (index < 0 || index >= count) return;
		for (int i = index; i < count - 1; i++) {
			data[i] = data[i + 1];
		}
		count--;
	}
	~IntRepo() {
		delete[] data;
	} //jic
};
int main() {
	IntRepo repo;
	repo.add(10);
	repo.add(20);
	repo.add(30);
	repo.add(40);
	repo.add(50);
	cout << "Before: ";
	for (int i = 0; i < repo.count; i++) {
		cout << "[" << repo.data[i] << "]";
	}
	repo.removeAt(2);
	cout << "\nAfter: ";
	for (int i = 0; i < repo.count; i++) {
		cout << "[" << repo.data[i] << "]";
	}
	return 0;
}