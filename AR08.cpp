#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int maxSubArraySum(int a[], int size)
{
   int max_so_far = a[0];
   int curr_max = a[0];
 
   for (int i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}
int main()
{
    int numArr[100];
    for(int i=0; i<100; i++){
        numArr[i] = 0;
    }

    int idx=0;
            while(cin >> numArr[idx])
                idx++;

	int max_sum = maxSubArraySum(numArr, idx);
    if(max_sum < 0)
    	cout << 0 << endl;
	else
    	cout << max_sum << endl;

    return 0;
}
