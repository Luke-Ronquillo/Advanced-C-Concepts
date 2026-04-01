#include <iostream>
using namespace std;

int* DoubleArray(const int arr[], int size);

int main()
{
    // Initialize Variables
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    // Prints the array before it doubled
    cout << "The array before doubling: { ";
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << arr[size - 1] << " }\n\n";

    // Doubles the array through the DoubleArray function
    int* newArr = DoubleArray(arr, size);
    size *= 2;
    
    // Prints the array after doubling
    cout << "the array after doubling: { ";
    for (int i = 0; i < size - 1; i++)
    {
        cout << newArr[i] << " , ";
    }
    cout << newArr[size - 1] << " }";

    return 0;
}

int* DoubleArray(const int arr[], int size)
{
    // Creates a pointer to a new array
    int* newArr = new int[size * 2];

    // Copies the contents of the old array to the new array that is twice in size
    for (int i = 0; i < size * 2; i++)
    {
        if(i < size)
            newArr[i] = arr[i];
        else
            newArr[i] = 0;
    }

    return newArr;
}