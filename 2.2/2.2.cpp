#include <iostream>
#include "Integer.h"

using namespace std;

int main()
{
	Integer c(2);
	cout << c++;
	cout << c;
	cout << ++c;
	cout << c << endl;

	Integer a, b;
	cin >> a >> b;
	cout << endl;
	cout << "(+) " << a + b;
	cout << "(-) " << a - b;

	return 0;
}
