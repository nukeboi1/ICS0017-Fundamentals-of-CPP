#include <iostream>
#include <exception>
#include <limits>
using namespace std;
class InvalidInputException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Invalid input after 3 tries.";
    }
};
int getValidInput() {
    int value;
    int attempts = 0;
    while (attempts < 3) {
        cout << "Enter an integer: ";
        cin >> value;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            attempts++;
            if (attempts == 3) {
                throw InvalidInputException();
            }
            else {
                cout << "Try again. Attempts left: " << (3 - attempts) << endl;
            }
        }
        else {
            return value;
        }
    }
}
int main() {
    try {
        int x = getValidInput();
        cout << "You entered: " << x << endl;
    }
    catch (const exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}