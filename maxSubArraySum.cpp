#include<iostream>
using namespace std;


//<----------------------------- BRUTEFORCE APPROACH  --------------------------------->

// int main(){
    
//     int n=7;
//     int arr[n]={3,-4,5,4,-1,7,-8};
//     int maxSum=0;

//     for(int st=0;st<n;st++){

//         for(int end=st;end<n;end++){

//             int currentsum=0;
//             for(int i=st;i<=end;i++){

//                 currentsum+=arr[i];
                
//             }
//             maxSum=max(currentsum,maxSum);
//         }
//     }
//     cout<<maxSum<<endl;

//     return 0;
// }


//<----------------------------- KADANE'S ALGORITHM  --------------------------------->


int main(){

    int n=7;
    int arr[n]={3,-4,5,4,-1,7,-8};
    int maxSum=0;
    int currentsum = 0;

    for(int i =0; i<n; i++){
        currentsum+=arr[i];
        maxSum=max(currentsum,maxSum);

        if(currentsum<0){
            currentsum=0;
        }
    }
    cout<<maxSum<<endl;

    return 0;
}