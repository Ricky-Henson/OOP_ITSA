#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	int input, result=0;
	for(int i=0; i<6; i++){
		cin >> input;
		int cubic = pow(input, 3);
		result += cubic;
	}
	cout << result << endl;

	return 0;
}
