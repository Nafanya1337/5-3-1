#include "Class3.h"

Class3::Class3(int a1, int a2, int a3) : Class2(a1,a2)
{
	this->a = a3;
}

int Class3::F(int x)
{
	return Class2::F(x) + a * x * x * x;
}
