
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double num, n, i, den, x, res;
    num = 1;
    den = 1;
    n = 64;
    
    cout << "x = ";
    cin >> x;
    
    for (i = 2; i <= n; i)
    {
        num = num * (x - i);
        den = den * (x - (i - 1));
        i = i * 2;
    }
    res = num / den;
    cout << "result = " << res;
}
