#include<iostream>
using namespace std;

bool linearSearch(int matrix[4][3], int rows, int cols, int target){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}}; 
    int rows = 4;
    int cols = 3;
    int target = 10;
    cout<<linearSearch(matrix, rows, cols, target)<<endl;
    return 0;
}