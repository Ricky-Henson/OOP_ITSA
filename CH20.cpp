#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
 
struct Products{
    string name;
    vector<int> prices;
};

int main()
{
    int tc, structSize=0;
    cin >> tc;
    Products products[tc];

    for(int i=0; i<tc; i++)
    {
        string product;
        int price, flag=0;
        cin >> product; cin >> price;
        if(i==0){
            products[0].name = product;
            products[0].prices.push_back(price);
            structSize++;
            continue;
        }
        for(int j=0; j<structSize; j++){
            if(products[j].name == product){
                products[j].prices.push_back(price);
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            products[structSize].name = product;
            products[structSize].prices.push_back(price);
            structSize++;
        }
    }
    // for(int i=0; i<structSize; i++){
    //     cout << products[i].name << endl;
    //     for(int j=0; j<products[i].prices.size(); j++){
    //         cout << products[i].prices[j] << " ";
    //     }
    //     cout << endl;
    // }
    int minSum=0;
    for(int i=0; i<structSize; i++){
        for(int j=0; j<products[i].prices.size(); j++){
        }
        minSum+=(*max_element(products[i].prices.begin(), products[i].prices.end()));
    }
    cout << minSum << endl;

    return 0;
}
