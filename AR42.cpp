#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int compare(const void* a, const void* b)
{
	const int* x = (int*) a;
	const int* y = (int*) b;

	if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;

	return 0;
}

int main(){
    int num[10];
    for(int i=0; i<10; i++)
        cin >> num[i];

    qsort(num, 10, sizeof(int), compare);

    // for(int i=0; i<10; i++)
    //     cout << num[i] << endl;

    cout << "Largest number = " << num[9] << endl;
    cout << "Smallest number = " << num[0] << endl;


   return 0;
}
