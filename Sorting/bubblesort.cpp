#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped;

    // Outer loop for passes
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false; // track if any swap happened

        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Manual swap without using swap()
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }

        // If no swaps happened → array already sorted
        if (!swapped)
            break;
    }
}

int main()
{
    int arr[] = {5, 3, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
