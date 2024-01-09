#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
 
using namespace std;
 
 
void fillMatrix(int **arr, int n)
{
    srand(time(NULL));
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            arr[i][j] = (rand() % 10) + 0;
        }
        cout << endl;
    }
}
 
int main()
{
    setlocale(LC_ALL, "");
    int n;
    int arr[n][n];
    cout << "Введите размер квадратной матрицы: ";
    cin >> n;
    cout << endl;
    fillMatrix(arr,n);
 
 
 
 
    return 0;
}