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
	int tc;
    cin >> tc;
    int num[tc];
	for(int i=0; i<tc; i++){
        cin >> num[i];
    }
    qsort(num, tc, sizeof(int), compare);
	for(int i=0; i<tc; i++){
        cout << num[i] << endl;
    }

    return 0;
}
