#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	while(cin >> word){
        int len = word.length();
        int flag = 0;
        for(int i=0,j=len-1;i<len,j>=0;i++,j--){
            if(word[i] == word[j]){
                continue;
            }
            else if(word[i]!=word[j]){
                flag = 1;
                break;
            }
        }
        
        if(flag == 1) cout << "NO" << endl;
        else if (flag == 0) cout << "YES" << endl;
    }
	
	return 0;
}
