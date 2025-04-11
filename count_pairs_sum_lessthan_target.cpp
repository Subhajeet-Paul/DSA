#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//  <----------------- BRUTE FORCE APPROACH --------------------->

// int countPairs(vector<int> arr, int target){
//     int n = arr.size();
//     int count = 0;
//     for(int i=0; i<n; i++){
//         for(int j= i; j<n; j++){
//             if(i<j && j<n){
//                 if(arr[i]+arr[j]<target){
//                     count++;
//                 }
//             }
//         }
//     }
//     return count;
// }


// <---------------------- OPTIMIZED APPROACH -------------------->

int countPairs(vector<int>nums ,int target){
    int count=0;
    sort(nums.begin(),nums.end());
    int start= 0;
    int end = nums.size()-1;

    while(start != end){
        if(nums[start]+ nums[end]< target){
            count += (end-start);
            start++;
        }else{
            end--;
        }
    }    
    
    return count;
}

int main(){
    vector<int> arr = {-1,1,2,3,1};
    int target = 2;
    int count = countPairs(arr, target);
    cout<<count;
    return 0;
}