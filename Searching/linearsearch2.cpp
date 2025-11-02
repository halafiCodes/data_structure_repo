
#include <iostream>
using namespace std;

int linearsearch2(int num[], int n, int target)
{

    for (int i = 0; i < n; i++)
    {
        if (num[i] == target)
            return i;
    }

    return -1;
}

int main()
{

    int array[] = {22, 55, 66, 77, 88, 90, 34};
    int n = 7;
    int target;
    cout << "Enter The number you want to search: ";
    cin >> target;

    int res = linearsearch2(array, n, target);
    if (res != -1)
        cout << "The number is found at index " << res << endl;
    else
        cout << "Not Found" << endl;
}