#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    int maxprofit =0, bestbuy, sizearr;
    cout<<"Enter the size of the array : ";
    cin>>sizearr;
    int arr[sizearr];
    cout<<"Enter the elements of the array : ";
    for(int j=0;j<sizearr;j++){
        cin>>arr[j];
    }
    bestbuy=arr[0];

    for(int i=1 ; i<sizearr; i++){
        bestbuy=min(bestbuy,arr[i]);
        maxprofit=max(maxprofit,arr[i]-bestbuy);
    }
    cout<<"The maximum profit is : "<<maxprofit;
    return 0;
}