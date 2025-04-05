#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> nums = {15,2,3,11,2,2};
    // int target = 9;
    // int sum = 0;
    // int n = nums.size();
    // vector<int> ans;
    // for(int i=0; i<n; i++){
    //     if(sum<=target && sum + nums[i]<=target){
    //         sum+=nums[i];
    //         ans.push_back(i);
    //     }
    // }
    // for(int i=0; i<ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }

    int arr[]={2,11,4,15,3};
    int target=9;
    int sum=0;
    int size= sizeof(arr)/sizeof(arr[0]);
    int result[size];
    int index=0;

    for(int i =0; i<size; i++ ){
        if(sum<=target && sum + arr[i]<= target){
            sum+=arr[i];
            result[index]=i;
            index++;
        }
    }
    for(int i= 0; i<index; i++){
        cout<<result[i]<<" ";
    }

    return 0;
}