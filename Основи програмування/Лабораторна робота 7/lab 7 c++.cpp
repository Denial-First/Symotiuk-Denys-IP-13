
#include <iostream>
#include <iomanip>
using namespace std;

void Init_Arr(int* arr, int n);
void Replace_Els(int* arr, int n, int dif);
int Count_dif(int* arr, int n);


int main()
{
	int n, min, max, dif;
	int* K;
	srand(time(NULL));
	
	cout << "Enter number of elements: ";
	cin >> n;
	K = new int[n];
	Init_Arr(K, n);
	
	dif = Count_dif(K, n);
	Replace_Els(K, n, dif);

	for (int i = 0; i < n; i++)
	{
		cout <<  K[i] << " ";
	}
	delete[] K;
}

void Init_Arr(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 11;
		cout << arr[i] << " ";
	}
	cout << endl;
}

int Count_dif(int* arr, int n)
{
	int min, max;
	
	max = arr[0];
	min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];

	}
	return max - min;
}

void Replace_Els(int* arr, int n, int dif)
{
	for (int i = 0; i < n; i += 2)
		arr[i] = dif;
	cout << endl;
}
