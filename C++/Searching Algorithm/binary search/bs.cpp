#include <iostream>
#include <vector>
using namespace std;
bool binarySearch(vector<int> &v, int f)
{
    int start = 0;
    int end = v.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (v[mid] == f)
        {
            return true;
        }
        else if (v[mid] < f)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}
int main()
{
    int n, i, ele, find;
    cout << "Enter the size of array: \n";
    cin >> n;
    vector<int> v;
    cout << "Enter elements of array: \n";
    for (i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }
    cout << "Enter element to be searched: \n";
    cin >> find;
    if (binarySearch(v, find))
    {
        cout << "Found!\n";
    }
    else
    {
        cout << "No such element \n";
    }
    return 0;
}