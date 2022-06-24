#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;

    for(int i=0; i<tc; i++){
        string father, mother, child;
        cin >> father >> mother >> child;
        if(father == "O" && mother == "O"){
            if(child == "O") cout << "YES" << endl;
            else cout << "IMPOSSIBLE" << endl;
        }
        else if((father == "O" && mother == "A") || (father == "A" && mother == "O")){
            if(child == "A" || child == "O") cout << "YES" << endl;
            else cout << "IMPOSSIBLE" << endl;
        }
        else if((father == "O" && mother == "B") || (father == "B" && mother == "O")){
            if(child == "B" || child == "O") cout << "YES" << endl;
            else cout << "IMPOSSIBLE" << endl;
        }
        else if((father == "O" && mother == "AB") || (father == "AB" && mother == "O")){
            if(child == "A" || child == "B") cout << "YES" << endl;
            else cout << "IMPOSSIBLE" << endl;
        }
        else if(father == "A" && mother == "A"){
            if(child == "A" || child == "O") cout << "YES" << endl;
            else cout << "IMPOSSIBLE" << endl;
        }
        else if((father == "B" && mother == "A") || (father == "A" && mother == "B")){
            cout << "YES" << endl;
        }
        else if((father == "AB" && mother == "A") || (father == "A" && mother == "AB")){
            if(child == "A" || child == "B" || child == "AB") cout << "YES" << endl;
            else cout << "IMPOSSIBLE" << endl;
        }
        else if(father == "B" && mother == "B"){
            if(child == "O" || child == "B") cout << "YES" << endl;
            else cout << "IMPOSSIBLE" << endl;
        }
        else if((father == "B" && mother == "AB") || (father == "AB" && mother == "B")){
            if(child == "A" || child == "B" || child == "AB") cout << "YES" << endl;
            else cout << "IMPOSSIBLE" << endl;
        }
        else if(father == "AB" && mother == "AB"){
            if(child == "A" || child == "B" || child == "AB") cout << "YES" << endl;
            else cout << "IMPOSSIBLE" << endl;
        }
    }

   return 0;
}
