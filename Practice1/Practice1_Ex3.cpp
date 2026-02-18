#include <iostream>
using namespace std;
int arithmetic_operators(int number) {
	int original_number{ number };
	//----WRITE YOUR CODE BELOW THIS LINE---
	number = number * 2; //-- Multiply number by 2 and assign the result back to number
	number = number + 9; //-- Add 9 to number and assign the result back to number
	number = number - 3; //-- Subtract 3 from number and assign the result back to number
	number = number / 2; //-- Divide number by 2 and assign the result back to number
	number = number - original_number; //-- Subtract original_number from number and assign the result back to number
	number = number % 3; //-- Take the modulus 3 (%) of number and assign it back to number
	//----WRITE YOUR CODE ABOVE THIS LINE---
	return number;
}