#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int compare(const void* a, const void* b)
{
	const int* x = (int*) a;
	const int* y = (int*) b;

	if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;

	return 0;
}

int main()
{
	int testcase;
	cin >> testcase;
	int number[testcase];

	for(int i=0; i<testcase; i++){
		cin >> number[i];
	}
	
	qsort(number, testcase, sizeof(int), compare);
	int flag=0;
	for(int i=0; i<testcase; i++){
		if(number[i] == number[i+1]){
			cout << "0" << endl;
			flag=1;
			break;
		}
	}
	if(flag == 0) cout << "1" << endl;
	return 0;
}
