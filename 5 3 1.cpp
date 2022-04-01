#include <iostream>
#include "Class4.h"

using namespace std;

int main()
{
	Class1* ptr;
	int a1, a2, a3, a4;
	int x;
	cin >> a1 >> a2 >> a3 >> a4;
	cout << "a1 = " << a1 << "    a2 = " << a2 << "    a3 = " << a3 << "    a4 = " << a4;
	Class4 obj(a1, a2, a3, a4);
	ptr = &obj;
	while (true)
	{
		cin >> x;
		if (x == 0) break;
		int n;
		cin >> n;
		cout << "\nClass " << n << "    F( " << x << " ) = ";
		if (n == 1) cout << ptr->::Class1::F(x);
		else if (n == 2) cout << ((Class2*)ptr)->::Class2::F(x);
		else if (n == 3) cout << ((Class3*)ptr)->::Class3::F(x);
		else if (n == 4) cout << ((Class4*)ptr)->F(x);
	}
}