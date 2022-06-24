#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    int num;

    for(int i=0; i<tc; i++){
        int t1=0, t2=1, nextTerm=0;
        cin >> num;

        // cout << "Fibonacci Series: ";
        for (int i = 1; i <= num; i++) {
            // Prints the first two terms.
            if(i == 1) {
                if(i!=num)
                    cout << t2 << " ";
                else cout << t2 << endl;
                continue;
            }
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            if(i!=num)
                cout << nextTerm << " ";
            else cout << nextTerm << endl;
        }
    }
    return 0;
}
