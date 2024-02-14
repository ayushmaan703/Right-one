// print all the elements of an array
// #include <iostream>
// using namespace std;
// void print(int *arr, int idx, int n)
// {
//     if (idx == n)
//         return;
//     cout << arr[idx]<<"\n";
//     print(arr, idx + 1, n);
// }
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     print(arr, 0, 5);
//     return 0;
// }
/*Above code will give an output like
1
2
3
4
5
that is in a sequential manner
*/
// #include <iostream>
// using namespace std;
// void print(int *arr, int idx, int n)
// {
//     if (idx == n)
//         return;
//     print(arr, idx + 1, n);
//     cout << arr[idx]<<"\n";
// }
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     print(arr, 0, 5);
//     return 0;
// }
/* The above code will give an output like
5
4
3
2
1
that is in a reversed order
*/
#include <iostream>
using namespace std;
void print(int *arr, int idx, int n)
{
    if (idx == n)
        return;
    cout << arr[idx]<<"\n";
    print(arr, idx + 1, n);
    cout << arr[idx]<<"\n";
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    print(arr, 0, 5);
    return 0;
}
/*and this code will give  an output like
1
2
3
4
5
5
4
3
2
1
that is first in  normal and after it in a reversed manner 
*/
/*all of this is just happening just by the positioning of the "cout" which decides that if there is anything is to be done after the call of the function*/