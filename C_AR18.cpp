/* A Naive recursive implementation of LCS problem */
#include <bits/stdc++.h>
using namespace std;

int lcs( string X, string Y, int m, int n )
{
	if (m == 0 || n == 0)
		return 0;
	if (X[m-1] == Y[n-1])
		return 1 + lcs(X, Y, m-1, n-1);
	else
		return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}

int main()
{
	int str1Len, str2Len;
	string str1, str2;
	cin >> str1Len >> str2Len;
	cin >> str1 >> str2;
	
	cout << lcs( str1, str2, str1Len, str2Len ) << endl;
	
	return 0;
}
