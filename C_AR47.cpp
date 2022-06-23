#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int number[10]={0,0,0,0,0,0,0,0,0,0};

	for(int i=0; i<10; i++){
		cin >> number[i];
	}
	for(int i=9; i>=0; i--){
		if(i!=0)
			cout << number[i] << " ";
		else cout << number[i] << endl;
	}

	return 0;
}
