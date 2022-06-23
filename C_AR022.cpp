#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);

	for(int i=0; i<str.length(); i++){
		if(isupper(str[i])) alphabet[str[i] - 'A']++;
		else if(islower(str[i])) alphabet[str[i] - 'a']++;
	}
	for(int i=0; i<26; i++){
		if(i<25)
			cout << alphabet[i] << " ";
		else cout << alphabet[i] << endl;
	}
	return 0;
}
