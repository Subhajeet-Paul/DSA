#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


// <---------------------BRUTEFORCE APPROACH-------------------------->
// int subarraySum(int nums[], int n, int k,int end) {
//     int count = 0;
//     for(int i=0;i<=end;i++){
//         int sum = 0;
//         for(int j=i;j<=end;j++){
//             sum = sum + nums[j];
//             if(sum == k){
//                 count++;
//             }
//         }
//     }
//     return count;
// }



// <---------------------OPTIMAL APPROACH-------------------------->

int subarraySum(vector<int> &arr, int k){
    int n = arr.size();
    int count = 0;  
    vector<int> prefixSum(n,0);
    prefixSum[0] = arr[0];
    for(int i=1;i<n;i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
    unordered_map<int,int> m;
    for(int j=0;j<n;j++){
        if(prefixSum[j] == k){
            count++;
        }
        int val= prefixSum[j] - k;

        if(m.find(val) != m.end()){
            count = count + m[val];
        }
        if(m.find(prefixSum[j]) == m.end()){
            m[prefixSum[j]] = 0;
        }
        m[prefixSum[j]]++;
    }
    return count;
}


int main(){
    // int n=6;
    // int nums[n]={9,4,20,3,10,5};
    // int k = 33;
    // int end = 5;
    // int ans = subarraySum(nums,n,k,end);
    // cout<<ans<<endl;

    vector<int> arr = {9,4,20,3,10,5};
    int k = 33;
    int ans = subarraySum(arr,k);
    cout<<ans<<endl;
    return 0;
}