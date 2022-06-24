#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    string text;
	int shift;

	getline(cin, text);
	cin >> shift;
	for(int i=0; i<text.length(); i++){
		if(isalpha(text[i])){
            if(isupper(text[i])){
                if(text[i] + shift > 90){
                    text[i] = text[i] - 26 + shift;
                }
                else{
                    text[i] = text[i] + shift;
                }
            }
            if(islower(text[i])){
                if(text[i] + shift > 122){
                    text[i] = text[i] - 26 + shift;
                }
                else{
                    text[i] = text[i] + shift;
                } 
            }
        }
		else if(isdigit(text[i])){
            if(text[i] + shift > 57){
                text[i] = text[i] - 10 + shift;
            }
            else{
                text[i] = text[i] + shift;
            } 
        }
	}
	cout << text << endl;

    return 0;
}
