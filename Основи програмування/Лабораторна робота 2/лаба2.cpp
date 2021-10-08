

#include <iostream>
using namespace std;

int main()
{
    float a, b, c;

    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;

    if (a == b)
    {
        cout << "a=b";
    }
    else if (b == c)
    {
        cout << "b=c";
    }
    else if (a == c)
    {
        cout << "a=c";
    }
    else
    {
        cout << "No equal numbers";
    }
}
