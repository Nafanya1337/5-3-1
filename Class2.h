#ifndef _CLASS2_H_
#define _CLASS2_H_

#include "Class1.h"

class Class2 : public Class1
{
public:
	Class2(int a1, int a2);
	int F(int x) override;
private:
	int a;
};

#endif
