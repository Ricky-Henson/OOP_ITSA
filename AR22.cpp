#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    string text;

	cin >> text;
	for(int i=0; i<text.length(); i++){
		text[i]-=3;
	}
	cout << text << endl;

    return 0;
}
