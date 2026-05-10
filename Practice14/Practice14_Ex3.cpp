#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Person {
	int id;
	string name;
};

string toLine(const Person& p) {
	return to_string(p.id) + " " + p.name;
}
class PersonRepo {
public:
	Person* data;
	int count;
	int capacity;
	PersonRepo() {
		capacity = 4;
		count = 0;
		data = new Person[capacity];
	}
	~PersonRepo() {
		delete[] data;
	}
	void add(const Person& p) {
		if (count < capacity) {
			data[count++] = p;
		}
	}
	void saveAll(const string& filename) {
		ofstream file(filename);
		if (!file.is_open()) return;
		for (int i = 0; i < count; i++) {
			file << toLine(data[i]) << endl;
		}
	}
};
int main() {
	PersonRepo repo;
	repo.add({ 1, "John" });
	repo.add({ 2, "Anna" });
	repo.add({ 3, "Maria" });
	repo.saveAll("people.txt");
	return 0;
}