#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int year;
	cin >> year;

	if(year % 12 == 0) cout << "monkey" << endl;
	else if(year % 12 == 1) cout << "rooster" << endl;
	else if(year % 12 == 2) cout << "dog" << endl;
	else if(year % 12 == 3) cout << "pig" << endl;
	else if(year % 12 == 4) cout << "rat" << endl;
	else if(year % 12 == 5) cout << "ox" << endl;
	else if(year % 12 == 6) cout << "tiger" << endl;
	else if(year % 12 == 7) cout << "rabbit" << endl;
	else if(year % 12 == 8) cout << "dragon" << endl;
	else if(year % 12 == 9) cout << "snake" << endl;
	else if(year % 12 == 10) cout << "horse" << endl;
	else if(year % 12 == 11) cout << "sheep" << endl;

   return 0;
}
