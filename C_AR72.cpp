#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int tc;
	cin >> tc;

    for(int i=0; i<tc; i++){
        int FullTicket, HalfTicket;
        int res=0;
        cin >> FullTicket >> HalfTicket;
        res = FullTicket*250 + HalfTicket*175;
        cout << res << endl;
    }

   return 0;
}
