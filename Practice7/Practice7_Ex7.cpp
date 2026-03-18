#include <iostream>
using namespace std;
class Account {
public:
	string account_id;
protected:
	string password;
};
class Email : protected Account {
public:
	void set_id(string acc) {
		account_id = acc;
	}
	string get_id() {
		return account_id;
	}
	void set_password(string pw) {
		password = pw;
	}
	string get_password() {
		return password;
	}
};
int main() {
	string acc, pw;
	cin >> acc >> pw;
	Email email;
	email.set_id(acc);
	email.set_password(pw);
	cout << email.get_id() << endl;
	cout << email.get_password() << endl;
	return 0;
}