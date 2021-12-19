
#include <iostream>
#include <iomanip>
using namespace std;

int** Create_Arr(int rows, int cols);
void Init_Arr(int** arr, int rows, int cols);
void Output_Arr(int** arr, int rows, int cols);
void Transpose_Arr(int** arr, int** arrT, int rowsT, int colsT);
void DeleteArray(int** arr, int rows);

int main()
{
	int n, m;
	int** X;
	int** Y;
	srand(time(NULL));

	cout << "Enter n: ";
	cin >> n;
	cout << "Enter m: ";
	cin >> m;

	cout << "Array X[n x m]: " << endl;
	X = Create_Arr(n, m);
	Init_Arr(X, n, m);
	Output_Arr(X, n, m);

	cout << "Array Y[n x m]:" << endl;
	Y = Create_Arr(m, n);
	Transpose_Arr(X, Y, m, n);
	Output_Arr(Y, m, n);

	DeleteArray(Y, m);
	DeleteArray(X, n);
}

int** Create_Arr(int rows, int cols)
{
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	return arr;
}

void Init_Arr(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			arr[i][j] = rand() % 100;
}

void Output_Arr(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			cout << right << setw(3) << arr[i][j] << " ";
		cout << endl;
	}
}

void Transpose_Arr(int** arr, int** arrT, int rowsT, int colsT)
{
	for (int i = 0; i < rowsT; i++)
	{
		for (int j = 0; j < colsT; j++)
		{
			arrT[i][j] = arr[j][i];
		}

	}
}

void DeleteArray(int** arr, int rows) 
{
	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}
