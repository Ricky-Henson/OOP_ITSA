#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
    int hip; // hip circumference size in centimeter
    float height; // in meters
 
    while(cin >> hip)
    {
        int BAI = 0;
        cin >> height;
        BAI = (hip / pow(height, 1.5)) - 18;
        // cout << BAI << endl;
        if(BAI < 18.5) cout << "underweight" << endl;
        else if(BAI<=24.9) cout << "healthy" << endl;
        else if(BAI<=29.9) cout << "overweight" << endl;
        else if(BAI<=39.9) cout << "obese" << endl;
        else if(BAI>=40) cout << "morbidly obese" << endl;
    }

    return 0;
}
