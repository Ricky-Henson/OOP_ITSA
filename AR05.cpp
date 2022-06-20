#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
#define MAXLINE 1024

// Function to display the array
void display(int a[], int n, int &numMultiplies, int numComp)
{
	string strnum;
	for (int i = 0; i < n; i++) {
		// cout << a[i] << " ";
		strnum = strnum + to_string(a[i]);
	}
	// cout << " " << strnum;
	int num = stoi(strnum);
	// cout << " int: " << num;
	if(num % numComp == 0) numMultiplies++;
	// cout << endl;
}

// Function to find the permutations
void findPermutations(int a[], int n, int &numMultiplies, int numComp)
{

	// Sort the given array
	sort(a, a + n);

	// Find all possible permutations
	int i=0;
	// cout << "Possible permutations are:\n";
	do {
		// cout << i++ << " -> ";
		display(a, n, numMultiplies, numComp);
	} while (next_permutation(a, a + n));
}

int main()
{
	int testdata;
	cin >> testdata;
	for(int i=0; i<testdata; i++){
		int numSave[10];
		int numComp=0, numMultiplies=0;
		int state=0;
		string str, smallstr;

		if(i==0)
			getline(cin, str);
		getline(cin, str);
		// cout << "str " << str << endl;
		stringstream strr(str);

		int size=0;
		while(getline(strr, smallstr, ' ')){
			int num = stoi(smallstr);
			// cout << "num: " << num << endl;
			if(num == -1){
				state=1;
				continue;
			}
			if(state == 0){
				if(num>=0 && num<=9){
					numSave[size] = num;
					size++;
				}
				else{
					cout << "Invalid input" << endl;
					exit(1);
				}
			}
			else{
				if(num>=1 && num<=36767){
					numComp = num;
				}
				else{
					cout << "Invalid input" << endl;
					exit(1);
				}
			}
		}
		// cout << "size: " << size << endl;
		findPermutations(numSave, size, numMultiplies, numComp);
		// cout << "result: ";
		cout << numMultiplies << endl;

	}

	return 0;
}
