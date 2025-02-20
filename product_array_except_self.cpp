#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;


int main(){
    // Taking array as an input

    int sizearr;
    cout<<"Enter the size of the array : ";
    cin>>sizearr;
    int arr[sizearr];
    cout<<"Enter the elements of the array : ";
    for(int j=0;j<sizearr;j++){
        cin>>arr[j];
    }

// <-------------- BRUTE FORCE APPROACH TIME COMPLEXITY O(n^2)----------------->

//     vector<int> ans;
//     for(int i=0;i<sizearr;i++){
//         int product=1;
//         for(int j=0;j<sizearr;j++){
//             if(i!=j){
//                 product*=arr[j];
//             }
//         }
//         ans.push_back(product);
        
//     }
//     for (int num : ans) {
//     cout << num << " ";
// }


// <-------------- OPTIMAL APPROACH TIME COMPLEXITY O(n)----------------->


    int n = sizearr;
    // vector<int> ans(n,1);
    // vector<int> prefix(n,1);
    // vector<int> suffix(n,1);

    // prefix[0]=1;
    // suffix[n-1]=1;

    // for(int i=1; i<n; i++){
    //     prefix[i]=prefix[i-1]*arr[i-1];
    // }
    // for(int i=n-2; i>=0; i--){
    //     suffix[i]=suffix[i+1]*arr[i+1];
    // }
    // for(int i=0; i<n; i++){
    //     ans[i]=prefix[i]*suffix[i];
    //     cout<<ans[i]<<" ";
    // }


// <-------------------------------- MOST OPTIMAL APPROACH TIME COMPLEXITY O(n),  SPACE COMPLEXITY 1 ------------------------------->

    vector<int> ans(n,1);

    ans[0]=1;
    ans[n-1]=1;

    for(int i=1; i<n; i++){
        ans[i]=ans[i-1]*arr[i-1];
    }
    int temp= 1;
    for(int i=n-2; i>=0; i--){
        
        temp=temp*arr[i+1];
        ans[i]=ans[i]*temp;
        
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}