#include "Class2.h"

Class2::Class2(int a1, int a2) : Class1(a1)
{
    this->a = a2;
}

int Class2::F(int x)
{
    return Class1::F(x) + a * x * x;
}
