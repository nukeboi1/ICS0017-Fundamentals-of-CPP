#include <iostream>
using namespace std;

struct Item {
	int id;
};
class SimpleRepo {
public:
	Item* data;
	int count;
	int capacity;
	SimpleRepo() {
		capacity = 2;
		count = 0;
		data = new Item[capacity];
	}
	~SimpleRepo() {
		delete[] data;
	}
	void ensureCapacity() {
		if (count < capacity) return;
		int newCap = capacity * 2;
		Item* newData = new Item[newCap];
		for (int i = 0; i < count; i++) {
			newData[i] = data[i];
		}
		delete[] data;
		data = newData;
		capacity = newCap;
	}
	void add(const Item& item) {
		ensureCapacity();
		data[count] = item;
		count++;
	}
};
int main() {
	SimpleRepo repo;
	for (int i = 1; i <= 5; i++) {
		Item it{ i };
		repo.add(it);
		cout << "Added id=" << it.id << " count=" << repo.count << " capacity=" << repo.capacity << endl;
	}
}