#include <iostream>
#include <vector>
using namespace std;

int binarysearch2(vector<int> &numbers, int target)
{

    int low = 0;
    int high = numbers.size() - 1; // The last element in the sorted list

    while (low < high)
    {
        int mid = (low + high) / 2;

        if (numbers[mid] == target)
        {
            return mid;
        }
        else if (numbers[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {22, 33, 55, 66, 77, 88, 89};
    int target;
    cout << "Enter the number you want to search: ";
    cin >> target;

    int result = binarysearch2(nums, target);
    if (result != -1)
        cout << "The number is found at index " << result << endl;
    else
        cout << "Not Found in the list" << endl;
}