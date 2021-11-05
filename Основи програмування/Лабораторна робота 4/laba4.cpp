
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double num, i, k, den, x, res;
    num = 1;
    den = 1;
    
    cout << "x = ";
    cin >> x;
    
    for (i = 2; i<=64; i = 2 * i) 
    {
        while (x == i - 1) {
            cout << "There is no result. Try again" << endl;
            cout << "x = ";
            cin >> x;
        }
        num = num * (x - i);
    }
    for (k = 1; k <= 63; k = 2 * k + 1)
    {
        den = den * (x - k);
    }
    res = num / den;
    cout << "result = " << res;
}
