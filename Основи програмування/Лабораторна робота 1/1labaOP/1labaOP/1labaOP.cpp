#include <iostream>
using namespace std;

int main()
{
	float x1, y1, x2, y2;
	float dis;

	cout << "First point coordinates:\n";
	cout << "X: ";
	cin >> x1;
	cout << "Y: ";
	cin >> y1;
	cout << "Second point coordinates:\n";
	
	cout << "X: ";
	cin >> x2;
	cout << "Y: ";
	cin >> y2;
	
	dis = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	cout << "Distance between these points equals " << dis << "\n";

} 