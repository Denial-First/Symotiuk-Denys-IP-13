#include <iostream>

using namespace std;

double FindLength(double x, double y);
void ClosestPoint(int n);

int main() {
    int n;
    cout << "Quantity of points: ";
    cin >> n;
    cout << endl;
    ClosestPoint(n);  
}

double FindLength(double x, double y) {
    float length;
    length = sqrt(pow(x, 2) + pow(y, 2));
    return length;
}

void ClosestPoint(int n) 
{
    double** points = new double* [n];
    for (int i = 0; i < n; i++)
        points[i] = new double[2];

    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0  ; j < 2; j++)
        {
            points[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << points[i][j] << " ";
        }
        cout << endl;
    }

    double closestx, closesty, minlength;
    minlength = FindLength(points[0][0], points[0][1]);
    closestx = points[0][0];
    closesty = points[0][1];
    for (int i = 1; i < n; i++) 
    {
        if (FindLength(points[i][0], points[i][1]) < minlength) {
            minlength = FindLength(points[i][0], points[i][1]);
            closestx = points[i][0];
            closesty = points[i][1];
        }
    }
 
    cout << "The closest point is (" << closestx << ", " << closesty << ")";


}