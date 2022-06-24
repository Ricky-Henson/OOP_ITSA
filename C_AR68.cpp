#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int hour, minute;
	cin >> hour >> minute;

	if(hour ==23 || hour==0) cout << "rat" << endl;
	else if(hour ==1 || hour==2) cout << "ox" << endl;
	else if(hour ==3 || hour==4) cout << "tiger" << endl;
	else if(hour ==5 || hour==6) cout << "rabbit" << endl;
	else if(hour ==7 || hour==8) cout << "dragon" << endl;
	else if(hour ==9 || hour==10) cout << "snake" << endl;
	else if(hour ==11 || hour==12) cout << "horse" << endl;
	else if(hour ==13 || hour==14) cout << "sheep" << endl;
	else if(hour ==15 || hour==16) cout << "monkey" << endl;
	else if(hour ==17 || hour==18) cout << "rooster" << endl;
	else if(hour ==19 || hour==20) cout << "dog" << endl;
	else if(hour ==21 || hour==22) cout << "pig" << endl;

   return 0;
}
