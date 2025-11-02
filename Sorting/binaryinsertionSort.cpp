#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (key == arr[mid])
            return mid + 1;
        else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}

void binaryInsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        int pos = binarySearch(arr, key, 0, j);

        while (j >= pos)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[pos] = key;
    }
}

int main()
{
    int arr[] = {37, 23, 0, 17, 12, 72, 31, 46, 100, 88};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    binaryInsertionSort(arr, n);

    cout << "Sorted array:   ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
