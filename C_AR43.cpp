#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int Power(int base, int power)
{
    if (power != 0)
        return (base*Power(base, power-1));
    else
        return 1;
}
int main()
{
    int base, power;

	while(cin >> base){
		int result=0;
		cin >> power;
		result = Power(base, power);
		cout << result << endl;
	}

    return 0;
}

