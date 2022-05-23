#ifndef C3_H
#define C3_H
#include "C2.h"
class C3 : public C2 {
public:
	C3(int a1, int a2, int a3, int a4) :C2(a1, a2, a3, a4) {};
	int res(int x) override {
		return (a1 * x + a2 * pow(x, 2) + a3 * pow(x, 3));
	};
};
#endif