#include <iostream>
using namespace std;

int main() {
	int a, b, sum;

	cout << "Enter first value: ";
	cin >> a;

	cout << "Enter second value: ";
	cin >> b;

	int *p1 = &a;
	int *p2 = &b;

	sum = *p1 + *p2;

	cout << "Sum = " << sum;

	return 0;
	}