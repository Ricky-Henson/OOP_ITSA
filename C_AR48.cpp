#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main(){
	string number;
	cin >> number;
	for(int i=0; i<4; i++){
		int num = number[i] - '0';
		// cout << num << endl;
		num = (num + 7) % 10;
		number[i] = num + '0';
	}
	int temp=0;
	temp = number[0];
	number[0] = number[2];
	number[2] = temp;

	temp = number[1];
	number[1] = number[3];
	number[3] = temp;

	cout << number << endl;
	return 0;
}
