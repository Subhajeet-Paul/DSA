#include<iostream>
#include<vector>
using namespace std;


bool isvalid(vector<int> &arr, int n, int m, int mid){
    int student = 1;
    int maxallocatedbooks= mid;
    int pages = 0;
    for(int i = 0 ; i < n; i++ ){
        if(arr[i] > maxallocatedbooks){
            return false;
        }
        if(pages + arr[i] <= maxallocatedbooks){
            pages = pages + arr[i];

        }else{
            student = student + 1;
            pages = arr[i];
        }
    }
    if(student <= m){
        return true;
    }else{
        return false;
    }

}
int allocateBooks(vector<int>&arr, int n, int m){
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
    vector<int> arr= {2,1,3,4};
    int n=4 ,m=2;

    cout<<allocateBooks(arr, n, m) << endl;
    return 0;
}