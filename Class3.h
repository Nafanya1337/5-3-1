#ifndef _CLASS3_H_
#define _CLASS3_H_

#include "Class2.h"

class Class3 : public Class2
{
public:
	Class3(int a1, int a2, int a3);
	int F(int x) override;
private:
	int a;
};

#endif
