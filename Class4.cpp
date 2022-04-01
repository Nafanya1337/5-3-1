#include "Class4.h"

Class4::Class4(int a1, int a2, int a3, int a4) : Class3(a1,a2,a3)
{
	this->a = a4;
}

int Class4::F(int x)
{
	return Class3::F(x) + a * x * x * x * x;
}
