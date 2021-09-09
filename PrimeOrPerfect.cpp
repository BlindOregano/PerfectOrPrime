#define _USE_MATH_DEFINES

#include <iostream>
#include <list>
#include <cmath>

using namespace std;

int main() {

	list<int> alist = {  };
	int top = 0;

	cout << "Enter integer value to factor: ";
	cin >> top;

	for (int i = 1; i < top; i++)
	{
		if (top % i == 0) {
			alist.push_back(i);
		}
		else {};

	}
	int total = 0;
	for (int i : alist)
	{
		cout << i << '\n';
		total += i;
	}
	cout << top << endl;
	cout << endl;

	if (total == top)
	{
		cout << top << " is a perfect number.";
	}
	else if (total == 1)
	{
		cout << top << " is a prime number.";
	}
	else { cout << top << " is neither a perfect nor a prime number"; }


	cout << endl;
	return 0;
}
