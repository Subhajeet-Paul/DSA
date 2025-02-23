#include<iostream>
#include<vector>

using namespace std;


int findmountainpoint(int arr[],int st,int end){

    int mid; 

    while(st <= end){
        mid = st + (end - st)/2;

        if (arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
            return mid;
        }else if(arr[mid-1] < arr[mid]){
            st = mid + 1;
        }else{
            end = mid-1;
        }
    }

    return -1;
}
int main(){

    int arr[]={1,2,4,6,9,3,2,1,0};
    int st = 1;
    int end = sizeof(arr) / sizeof(arr[0])-1;

    // <----------------- WITH BINARY SEARCH -------------------------->

    int index = findmountainpoint(arr,st,end);

    cout<<index<<endl;


    return 0;
}