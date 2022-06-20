#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct Number{
    int numCnt;
    int number;
};

int compare(const void* a, const void* b)
{
	const Number *x = (Number*) a;
	const Number *y = (Number*) b;

	if (x->number > y->number)
		return -1;
	else if (x->number < y->number)
		return 1;

	return 0;
}


int main(){
    int num, cnt=0, size=0;
    map<int,int> numMap;
    Number numberStruct[50];
    for(int i=0; i<50; i++){
        numberStruct[i].numCnt = 0;
        numberStruct[i].number = 0;
    }
    cin >> num; cnt++;
    while(num != -999 || cnt>50){
        if(size==0)
        {
            numberStruct[size].number = num;
            numberStruct[size++].numCnt++;
        }
        else{
            int flag=0;
            for(int i=0; i<size; i++){
                if(num == numberStruct[i].number){
                    numberStruct[i].numCnt++;
                    flag=1;
                    break;
                }
            }
            if(flag == 0){
                numberStruct[size].number = num;
                numberStruct[size++].numCnt++;
            }
        }
        cin >> num;
        cnt++;
    }
    qsort(numberStruct, size, sizeof(Number), compare);
    for(int i=0; i<size; i++){
        cout << numberStruct[i].number << " ";
        cout << numberStruct[i].numCnt << endl;
    }

    return 0;
}
