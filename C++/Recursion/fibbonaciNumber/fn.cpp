// find the nth fibbonaci number
#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
int main(){
    int n;
    cout << "Enter the nth number to find for: ";
    cin >> n;
    cout << "The number is: "<< fib(n-1)<<"\n";
    return 0; 
}