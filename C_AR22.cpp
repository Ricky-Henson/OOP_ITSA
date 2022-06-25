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
  
int main()  
{  
    string str;  
    int alphabet[26];  
    for(int i=0; i<26; i++)  
        alphabet[i]=0;  
    getline(cin, str);  
  
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
