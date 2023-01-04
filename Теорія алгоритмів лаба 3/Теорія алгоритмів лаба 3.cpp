
#include <iostream>
#include <ctime>
using namespace std;

void minElement(int*arr, int n)
{
    int min = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            min = (arr[j] < arr[min]) ? j : min;
            if (i != min)
            {
                temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }
        }
    }
}

void maxElement(int* arr, int n)
{
    int max;
    int temp;
    for (int i = 0; i < n; i++)
    {
        max = i;
        for (int j = i + 1; j < n; j++)
        {
            max = (arr[j] > arr[max]) ? j : max;
            if (i != max)
            {
                temp = arr[i];
                arr[i] = arr[max];
                arr[max] = temp;
            }
        }
    }
}

void print(int* arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}


int main()
{
    srand(time(0));
    int n;
    cout << "Enter n: ";
    cin >> n;
    int* array = new int[n];
    for (int i = 0; i < n; i++)
    {
        *(array + i) = rand() % 100;
        cout << array[i] << "\t";
    }
    minElement(array, n);
    cout << endl << "ASC: ";
    print(array, n);
    cout << endl << "DESC: ";
    maxElement(array, n);
    print(array, n);
    cout << endl;
    delete[]array;

}
