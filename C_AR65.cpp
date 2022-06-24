#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	int numChecked;
    int flag = 0;
    cin >> numChecked;
    int row, col;
    cin >> row >> col;
    int matrix[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> matrix[i][j];
        }
    }
    // row
    for(int i=0; i<row; i++){
        int reachedRow=0;
        for(int j=0; j<col; j++){
            if(matrix[i][j] == numChecked){
                reachedRow++;
            }
        }
        if(reachedRow == row){
            cout << "All " << numChecked << "'s on row " << i << endl;
            flag=1;
        }
    }
    // col
    for(int i=0; i<row; i++){
        int reachedCol=0;
        for(int j=0; j<col; j++){
            if(matrix[j][i] == numChecked){
                reachedCol++;
            }
        }
        if(reachedCol == col) {
            cout << "All " << numChecked << "'s on column " << i << endl;
            flag=1;
        }
    }
    // diagonal
    int reachedDiag=0;
    for(int i=0; i<row; i++){
        if(matrix[i][i] == numChecked){
            reachedDiag++;
        }
    }
    if(reachedDiag == row){ // NOT SURE
        cout << "All " << numChecked << "'s on diagonal" << endl;
        flag=1;
    }
    int matrix2[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            matrix2[i][j]=0;
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            matrix2[i][j] = matrix[i][col-j-1];
        }
    }
    // for(int i=0; i<row; i++){
    //     for(int j=0; j<col; j++){
    //         cout << matrix2[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    reachedDiag=0;
    for(int i=0; i<row; i++){
        if(matrix2[i][i] == numChecked){
            reachedDiag++;
        }
    }
    if(reachedDiag == row){ // NOT SURE
        cout << "All " << numChecked << "'s on subdiagonal" << endl;
        flag=1;
    }
    if(flag==0){
        cout << "There is no line with all " << numChecked << endl;
    }

    return 0;
}
