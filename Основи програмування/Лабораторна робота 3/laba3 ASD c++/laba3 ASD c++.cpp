
#include <iostream>
//#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double x, con, p, a, eps, xp1, xp2, xp3, xp4, xp5;
    x = 1;
    cout << "x = a^(1/p)" << endl;

    cout << "a = ";
    cin >> a;
    
    cout << "p = ";
    cin >> p;

    while (p == 1 || p == 2) {
        cout << "Invalid item. Try again" << endl;
        cout << "p =";
        cin >> p;
    }
    
    cout << "Epsilon = ";
    cin >> eps;
    
    con = pow(a, 1 / p);
   /* while(abs(con - x) > eps)
    {       
        xp1 = (x / (p * p));
        xp2 = (p * p - 1);
        xp3 = (0.5 * (p + 1) * a / pow(x, p));
        xp4 = (0.5 * (p + 1) * pow(x, p) / p);
        xp5 = xp2 + xp3 - xp4;

        x = xp1 * floor(xp5);
        cout << x << endl;
    } */
    while (abs(con - x) > eps) 
    {
        xp1 = 1 / p;
        xp2 = (p - 1) * x;
        xp3 = a / pow(x, p - 1);
        x = xp1 * (xp2 + xp3);
    }
    cout << "x = " << x;
}
