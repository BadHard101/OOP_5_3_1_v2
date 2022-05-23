#ifndef C4_H
#define C4_H
#include "C3.h"
class C4 : public C3 {
public:
	C4(int a1, int a2, int a3, int a4) :C3(a1, a2, a3, a4) {};
	int res(int x) override {
		return (a1 * x + a2 * pow(x, 2) + a3 * pow(x, 3) + a4 * pow(x, 4));
	};
};
#endif