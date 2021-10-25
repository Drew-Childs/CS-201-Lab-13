#include "Header.h"

int main() {
	int x;
	int list[5];


	cout << "Enter a number --> ";		//enters in initial number
	cin >> x;
	cout << endl << x << "! = " << factorial_r(x) << endl << endl;		//prints out factorial


	cout << "fibonacci(" << x << ") = " << fibonacci_r(x) << endl << endl;		//prints fibonacci


	cout << "Enter a number to check if it is a prime number --> ";		//inputs prime number
	cin >> x;

	if (is_prime_r(x, 2)) {		//runs prime number function
		cout << x << " is a prime number." << endl << endl;
	}
	else {
		cout << x << " is not a prime number." << endl << endl;
	}


	cout << "Next we will enter 5 values into an array" << endl;		//inputs values into array
	for (int i = 0; i < 5; i++) {
		cout << "Enter a value for index " << i << endl;
		cin >> x;
		list[i] = x;
	}
	cout << "The sum of the values is " << sum_r(list, 5) << endl << endl;		//runs summation function


	cout << "The list output in reverse is" << endl;		//outputs reverse of array
	output_reverse_list_r(list, 5);
	cout << endl << endl;

	return 0;
}