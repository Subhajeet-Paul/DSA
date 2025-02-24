#include<iostream>
#include<vector>

using namespace std;

int calculateSingleElement(int arr[],int st,int end){
    int mid;
    while(st<=end){
        mid= st+(end-st)/2;
        if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1]){
            return mid;
        }
        if(mid%2==0){
            if(arr[mid]==arr[mid-1]){
                end = mid - 1;
            }
            st = mid + 1;
        }
        else{
            if(arr[mid]==arr[mid-1]){
                st = mid + 1;
                
            }
            end=mid-1;
        }

        
    }
    return -1;
}
int main(){
    int arr[]={1,1,2,3,3,4,4,5,5,8,8};
    // int size = sizeof(arr) / sizeof(arr[0]);
    int st=0;
    int end=sizeof(arr) / sizeof(arr[0])-1;
    

    int index = calculateSingleElement(arr,st,end);

    cout<<index ;
    
    return 0;
}