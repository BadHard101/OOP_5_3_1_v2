#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "C1.h"
#include "C2.h"
#include "C3.h"
#include "C4.h"

int main()
{
	int a1, a2, a3, a4, x, num;
	cin >> a1 >> a2 >> a3 >> a4;

	cout << "a1 = " << a1;
	cout << " a2 = " << a2;
	cout << " a3 = " << a3;
	cout << " a4 = " << a4;

	C4* obj = new C4(a1, a2, a3, a4);

	while (true) {

		cin >> x;
		if (x == 0) break;
		cout << endl;
		cin >> num;

		cout << "Class " << num;
		cout << " F( " << x << " ) = ";

		switch (num) {
		case(1):
			cout << obj->C1::res(x);
			break;
		case(2):
			cout << obj->C2::res(x);
			break;
		case(3):
			cout << obj->C3::res(x);
			break;
		case(4):
			cout << obj->C4::res(x);
			break;
		}
	}
	return(0);
}
