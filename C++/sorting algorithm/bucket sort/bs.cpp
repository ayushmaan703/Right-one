// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// void bucketSort(float arr[], int n)
// {
//     int i, j;
//     vector<vector<float>> bucket(n, vector<float>());
//     for (i = 0; i < n; i++)
//     {
//         int idx = arr[i] * n;
//         bucket[idx].push_back(arr[i]);
//     }
//     for (i = 0; i < n; i++)
//     {
//         if (!bucket[i].empty())
//         {
//             sort(bucket[i].begin(), bucket[i].end());
//         }
//     }
//     int k = 0;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < bucket[i].size(); j++)
//         {
//             arr[k++] = bucket[i][j];
//         }
//     }
// }
// int main()
// {
//     int n, i;
//     cout << "Enter the size of array: \n";
//     cin >> n;
//     float arr[n];
//     cout << "Enter the elements of the array;  \n";
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     bucketSort(arr, n);
//     cout << "Sorted array is: \n ";
//     for (i = 0; i < n; i++)
//     {
//         cout << arr[i] << "\t";
//     }
//     return 0;
// }

/*Abb ye sirf kaam karega ek specific range me ho jab me number jab irregularity aaege arr me to ye sahi se kaam ne karega for ex ye asse input ke liye sahi ha {0.25,0.35,0.47,0.10} isme range fixed from 0 to 1 par ye asse input ke liye sahi se ne chale ga {0.25,0.35,0.47,0.10,10.1} is me regularity ne ha to iske liye program kuch assa hog*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void bucketSort(float arr[], int n)
{
    int i, j;
    vector<vector<float>> bucket(n, vector<float>());
    // finding range
    float maxEle = arr[0], minEle = arr[0];
    for (i = 0; i < n; i++)
    {
        maxEle = max(arr[i], maxEle);
        minEle = min(arr[i], minEle);
    }
    float range = (maxEle - minEle) / n;

    for (i = 0; i < n; i++)
    {
        int idx = (arr[i] - minEle) / range;
        float diff = (arr[i] - minEle) / range - idx;
        if (diff == 0 && arr[i] != minEle)
        {
            bucket[idx - 1].push_back(arr[i]);
        }
        else
        {
            bucket[idx].push_back(arr[i]);
        }
    }
    for (i = 0; i < n; i++)
    {
        if (!bucket[i].empty())
        {
            sort(bucket[i].begin(), bucket[i].end());
        }
    }
    int k = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < bucket[i].size(); j++)
        {
            arr[k++] = bucket[i][j];
        }
    }
}
int main()
{
    int n, i;
    cout << "Enter the size of array: \n";
    cin >> n;
    float arr[n];
    cout << "Enter the elements of the array;  \n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bucketSort(arr, n);
    cout << "Sorted array is: \n ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}
