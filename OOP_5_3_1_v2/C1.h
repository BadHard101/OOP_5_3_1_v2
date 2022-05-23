#ifndef C1_H
#define C1_H
#include <math.h>
#include <iostream>
using namespace std;
class C1 {
protected:
	int a1, a2, a3, a4;
public:
	C1(int a1, int a2, int a3, int a4);
	virtual int res(int x) { 
		return (a1 * x); 
	};
};
#endif