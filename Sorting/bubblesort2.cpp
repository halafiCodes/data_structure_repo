#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void bubblesortcall(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    vector<int> nums = {3, 43, 6, 7, 12, 65, 10};
    bubblesortcall(nums);
    for (int val : nums)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}