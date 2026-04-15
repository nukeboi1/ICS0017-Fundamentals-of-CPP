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
class NegativeValueException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Negative value is not allowed.";
    }
};
class TooSmallValueException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Value is too small.";
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
void checkNumber(int x) {
    if (x < 0) {
        throw NegativeValueException();
    }
    if (x < 10) {
        throw TooSmallValueException();
    }
}
int main() {
    try {
        int x = getValidInput();
        checkNumber(x);
        cout << "You entered: " << x << endl;
    }
    catch (const InvalidInputException& e) {
        cout << e.what() << endl;
    }
    catch (const NegativeValueException& e) {
        cout << e.what() << endl;
    }
    catch (const TooSmallValueException& e) {
        cout << e.what() << endl;
    }
    return 0;
}