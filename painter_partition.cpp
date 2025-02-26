#include<iostream>
#include<vector>
using namespace std;


bool isvalid(vector<int> &arr, int n, int m, int mid){
    int painter = 1;
    int maxboardlength= mid;
    int board = 0;
    for(int i = 0 ; i < n; i++ ){
        if(arr[i] > maxboardlength){
            return false;
        }
        if(board + arr[i] <= maxboardlength){
            board = board + arr[i];

        }else{
            painter = painter + 1;
            board = arr[i];
        }
    }
    if(painter <= m){
        return true;
    }else{
        return false;
    }

}
int painterPartition(vector<int>&arr, int n, int m){
    if(m > n){
        return -1;
    }
    int sum = 0 ,mid ;
    int answer;
    for(int i= 0; i<n; i++){
        sum= sum + arr[i];
    }
    int st = 0, end = sum;
    while (st<=end){
        mid = st + (end - st)/2;
        if(isvalid(arr, n ,m, mid)){
            answer = mid;
            end = mid - 1;

        }else{
            st = mid + 1;
        }
        
    }
    return answer;
}


int main(){
    vector<int> arr= {40,30,10,20};
    int n=4 ,m=2;

    cout<<painterPartition(arr, n, m) << endl;
    return 0;
}