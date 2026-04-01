#include <iostream>
using namespace std;

int* DoubleArray(const int arr[], int size);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "The array before doubling: { ";
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << arr[size - 1] << " }\n\n";

    int* newArr = DoubleArray(arr, size);
    size *= 2;
    
    cout << "the array after doubling: { ";
    for (int i = 0; i < size - 1; i++)
    {
        cout << newArr[i] << " , ";
    }
    cout << newArr[size - 1] << " }";
}

int* DoubleArray(const int arr[], int size)
{
    int* newArr = new int[size * 2];

    for (int i = 0; i < size * 2; i++)
    {
        if(i < size)
            newArr[i] = arr[i];
        else
            newArr[i] = 0;
    }

    return newArr;
}