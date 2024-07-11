#include <iostream>
#include "BigInteger.h"

using namespace std;

int main()
{
    BigInteger a = 1, b(2), c, d, e, f;
    f = a + 1;
    cout << f << endl;
    cin >> c >> d;
    e = c * d;
    f = ++b;
    cout << f << "-" << b << endl;
    f = b++;
    cout << f << "-" << b << endl;
    cout << a << "\t" << b << "\t" << e << "\t" << f << endl;
    f = 1;
    for(int i = 2;i <= 1000;i++)
    {
        f *= i;
    }
    cout << "1000! = " << f << endl;
    return 0;
}

