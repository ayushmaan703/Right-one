// remove a given character form a given string
#include <iostream>
using namespace std;
string removeChar(string *s, int idx, int n, char c)
{
    if (idx == n - 1)
        return " ";
    return ((s[idx] == c) ? " " : s[idx] + removeChar(s, idx, n, c));
}
int main()
{
    string s[5] = {"baxca"};
    removeChar(s, 0, 5, 'a');
    return 0;
}