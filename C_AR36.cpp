#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int date, month;
	cin >> month >> date;
	// cout << month << " " << date << endl;
	if(month==1){
		if(date>=1 && date <=20) cout << "Capricorn" << endl;
		else cout << "Aquarius" << endl;
	}
	if(month==2){
		if(date>=1 && date <=18) cout << "Aquarius" << endl;
		else cout << "Pisces" << endl;
	}
	if(month==3){
		if(date>=1 && date <=20) cout << "Pisces" << endl;
		else cout << "Aries" << endl;
	}
	if(month==4){
		if(date>=1 && date <=21) cout << "Aries" << endl;
		else cout << "Taurus" << endl;
	}
	if(month==5){
		if(date>=1 && date <=22) cout << "Taurus" << endl;
		else cout << "Gemini" << endl;
	}
	if(month==6){
		if(date>=1 && date <=22) cout << "Gemini" << endl;
		else cout << "Cancer" << endl;
	}
	if(month==7){
		if(date>=1 && date <=22) cout << "Cancer" << endl;
		else cout << "Leo" << endl;
	}
	if(month==8){
		if(date>=1 && date <=23) cout << "Leo" << endl;
		else cout << "Virgo" << endl;
	}
	if(month==9){
		if(date>=1 && date <=23) cout << "Virgo" << endl;
		else cout << "Libra" << endl;
	}
	if(month==10){
		if(date>=1 && date <=23) cout << "Libra" << endl;
		else cout << "Scorpio" << endl;
	}
	if(month==11){
		if(date>=1 && date <=22) cout << "Scorpio" << endl;
		else cout << "Sagittarius" << endl;
	}
	if(month==12){
		if(date>=1 && date <=21) cout << "Sagittarius" << endl;
		else cout << "Capricorn" << endl;
	}

   return 0;
}
