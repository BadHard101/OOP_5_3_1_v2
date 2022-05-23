#ifndef C2_H
#define C2_H
#include "C1.h"
class C2 : public C1 {
public:
	C2(int a1, int a2, int a3, int a4) :C1(a1, a2, a3, a4) {};
	int res(int x) override {
		return (a1 * x + a2 * pow(x, 2)); 
	};
};
#endif