#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	vector<int> num;
	int input;
	while(cin >> input){
		num.push_back(input);
	}
	for(int i=num.size()-1; i>=0; i--){
		if(i == 0) cout << num[i] << endl;
		else cout << num[i] << " ";
	}

	return 0;
}
