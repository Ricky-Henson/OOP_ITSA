#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	int numChecked;
    int matrix[3][3];
    int flag = 0;
    cin >> numChecked;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> matrix[i][j];
        }
    }
    // row
    for(int i=0; i<3; i++){
        int reachedRow=0;
        for(int j=0; j<3; j++){
            if(matrix[i][j] == numChecked){
                reachedRow++;
            }
        }
        if(reachedRow == 3){
            cout << "All " << numChecked << "'s on row " << i << endl;
            flag=1;
        }
    }
    // col
    for(int i=0; i<3; i++){
        int reachedCol=0;
        for(int j=0; j<3; j++){
            if(matrix[j][i] == numChecked){
                reachedCol++;
            }
        }
        if(reachedCol == 3) {
            cout << "All " << numChecked << "'s on column " << i << endl;
            flag=1;
        }
    }
    // diagonal
    int reachedDiag=0;
    for(int i=0; i<3; i++){
        if(matrix[i][i] == numChecked){
            reachedDiag++;
        }
    }
    if(reachedDiag == 3){
        cout << "All " << numChecked << "'s on diagonal" << endl;
        flag=1;
    }

    reachedDiag=0;
    if(matrix[0][2] == numChecked){
        reachedDiag++;
    }
    if(matrix[1][1] == numChecked){
        reachedDiag++;
    }
    if(matrix[2][0] == numChecked){
        reachedDiag++;
    }
    if(reachedDiag == 3){
        cout << "All " << numChecked << "'s on subdiagonal" << endl;
        flag=1;
    }
    if(flag==0){
        cout << "There is no line with all " << numChecked << endl;
    }
    return 0;
}
