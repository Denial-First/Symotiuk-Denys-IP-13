
#include <iostream>
using namespace std;

int main()
{
    int m, bnum, s, m1;
    double n;
    n = 0;
    s = -1;

    cout << "m=";
    cin >> m;
    while (m <= 0) 
    {
        cout << "m - natural number\n";
        cout << "m=";
        cin >> m;
    }
    m1 = m;
 
    for (m; m != 0; m = m / 2)
    {
        for (m1; m1 != 0; m1 = m1 / 2)
        {
            s += 1;
        }
        bnum = m % 2;
        n = n + bnum * pow(2, s);
        s -= 1;
    }
    cout << "n=" << n;
}
