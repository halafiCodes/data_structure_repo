#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void selection_sort(vector<int> &list)
{
    int s = list.size();
    for (int i = 0; i < s - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < s; j++)
        {
            if (list[j] < list[min])
                min = j;
        }

        swap(list[i], list[min]); // swap the the numbers
    }
}

int main()
{
    vector<int> nums = {22, 33, 5, 2, 76, 1, 45, 71};
    selection_sort(nums);
    for (int val : nums)
    {
        cout << val << " ";
    }
}