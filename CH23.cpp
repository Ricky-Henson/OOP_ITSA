#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int input;
    cin >> input;

    for(int i=0; i<input; i++)
    {
        string digit;
        cin >> digit;
        int a = digit[0] - '0';
        int b = digit[1] - '0';
        int c = digit[2] - '0';
        // cout << digit[0] << " " << a << endl;
        int result = a-b-c;
        cout << result << endl;
    }

    return 0;
}
