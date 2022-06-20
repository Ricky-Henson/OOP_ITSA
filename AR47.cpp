#include<iostream>
using namespace std;
 
int main()
{
    int num, remainder=0;
 
    cin >> num;

    while (remainder!=-1)
    {
        // cout << num << endl;
        if(num == 1) break;

        if (num % 2 == 0)
            num /= 2;
        else if (num % 3 == 0)
            num /= 3;
        else if (num % 5 == 0)
            num /= 5;
        else remainder = -1;
    }
    if(remainder == 0)
        cout << "Regular number!" << endl;
    else if(remainder == -1)
        cout << "Irregular number!" << endl;

    return 0;
}
