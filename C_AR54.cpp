#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	int tc;
    cin >> tc;
    int alpha[26]{0};
	for(int i=0; i<tc; i++){
        char c;
        cin >> c;
        alpha[c-'a']++;
    }
	for(int i=0; i<26; i++){
        if(alpha[i] != 0)
            cout << (char) (i+'a') << " " << alpha[i] << endl;
    }

    return 0;
}
