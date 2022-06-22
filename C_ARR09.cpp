#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	string str;
	vector<int> number;
	getline(cin, str);

	for(int i=0; i<str.length(); i+=2){
		number.push_back((str[i] - '0'));
	}
	
	sort(number.begin(), number.end()); // non-decreasing
	string min;
	for(auto x : number)
		min += to_string(x);
	// cout << max << endl;
	sort(number.begin(), number.end(), greater<int>()); // non-increasing
	string max;
	for(auto x : number)
		max += to_string(x);

	int sub = stoi(max) - stoi(min);
	cout << sub << endl;
	return 0;
}
