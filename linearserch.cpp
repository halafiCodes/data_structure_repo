#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> numbers = {3, 7, 2, 9, 14, 6};
    int target;

    cout << "Enter number to search: ";
    cin >> target;

    int index = linearSearch(numbers, target);

    if (index != -1)
        cout << "✅ Number found at index " << index << endl;
    else
        cout << " Number not found in the list." << endl;

    return 0;
}
