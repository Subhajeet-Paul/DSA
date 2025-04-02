#include<iostream>
using namespace std;

int maxSum(int matrix[4][3], int rows, int cols, int target){
    int max=0;
    int newmax=0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            newmax = newmax + matrix[i][j];
        }

        if(newmax>max){
            max = newmax;
            newmax=0;
        }else{
            newmax = 0;
        }
    }
    return max;
}

int main(){
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}}; 
    int rows = 4;
    int cols = 3;
    int target = 10;
    cout<<maxSum(matrix, rows, cols, target)<<endl;
    return 0;
}