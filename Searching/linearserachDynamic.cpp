
#include <iostream>
#include <vector>
using namespace std;

int linearsearch2(vector<int> &num, int target)
{

    for (size_t i = 0; i < num.size(); i++)
    {
        if (num[i] == target)
            return i;
    }

    return -1;
}

int main()
{

    vector<int> array = {22, 55, 66, 77, 88, 90, 34, 200, 990, 599, 688, 1000, 300};

    int target;
    cout << "Enter The number you want to search: ";
    cin >> target;

    int res = linearsearch2(array, target);
    if (res != -1)
        cout << "The number is found at index " << res << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}