#include<iostream>
using namespace std;


int binary(int arr[], int n, int st, int end, int target){
    if (st<=end){
        int mid = st+(end-st)/2;
    if (arr[mid]==target){
        return mid;
    }
    if(arr[target]>arr[mid]){
        return binary(arr,n,mid+1,end,target);
    }else{
        return binary(arr,n,st,mid-1,target);
    }
    }
    return -1;
}
int main(){
    int arr[]={0,1,2,3,4,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<binary(arr,n,0,7,7);
    return 0;
}