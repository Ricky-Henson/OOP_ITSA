#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	string c;
    int total=0;
    for(int i=0; i<5; i++){
        cin >> c;
        // cout << c << endl;
        if(c == "A"){
            total+=14;
        }
        else if(c == "J"){
            total+=11;
        }
        else if(c == "Q"){
            total+=12;
        }
        else if(c == "K"){
            total+=13;
        }
        else {
            int num = stoi(c);
            total+= num;
        }
    // cout << total << endl;
    }
    cout << total << endl;
    return 0;
}
