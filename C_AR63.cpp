#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	int row, col;
    cin >> row >> col;
    int matrix1[row][col];
    int matrixRes[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> matrix1[i][j];
            matrixRes[i][j] = 0;
        }
    }
    cin >> row >> col;
    int matrix2[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> matrix2[i][j];
            matrixRes[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(j!=col-1)
                cout << matrixRes[i][j] << " ";
            else cout << matrixRes[i][j];
        }
        cout << endl;
    }
    return 0;
}
