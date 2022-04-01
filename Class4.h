#ifndef _CLASS4_H_
#define _CLASS4_H_

#include "Class3.h"

class Class4 : public Class3
{
public:
	Class4(int a1, int a2, int a3, int a4);
	int F(int x) override;
private:
	int a;
};

#endif

