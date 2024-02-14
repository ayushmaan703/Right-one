// calculating n^m using normal approach with time complexity of O(n)


// #include <iostream>
// using namespace std;
// int power(int n, int m)
// {
//     if (m == 0)
//         return 1;
//     return (power(n, m - 1) * n);
// }
// int main()
// {
//     int n, m;
//     cout << "Enter n: ";
//     cin >> n;
//     cout << "Enter m: ";
//     cin >> m;
//     cout << "n raised to the power n is: " << power(n, m) << "\n";
//     return 0;
// }




// This question can also be done with a more optimiszed approach having TC of O(log n)
#include <iostream>
using namespace std;
int power(int n, int m)
{ int result ;

    if (m == 0)
        return 1;
 if (m%2==0){
    result =  power(n,m/2);
    return result*result ;
 }

    else 
{
result = power(n,(m-1)/2);
return n*result *result;
}
 }
int main()
{
    int n, m;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter m: ";
    cin >> m;
    cout << "n raised to the power n is: " << power(n, m) << "\n";
    return 0;
}