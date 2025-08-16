#include <iostream>
#include <vector>
using namespace std;


void getpermutation(vector<int> &nums, int index,vector<vector<int>>&ans){
    if (index==nums.size()){
        ans.push_back({nums});
        return;
    
    }
    for(int i=index; i<nums.size(); i++){
        swap(nums[i], nums[index]);
        getpermutation(nums,index+1,ans);

        swap(nums[i], nums[index]);
    
    }
        
}
int main(){
    vector<int> nums = {1,2,3};
    
    vector<vector<int>> ans;
    // 
    getpermutation(nums,0,ans);
    for (vector<int> val : ans){
        for (int i : val){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}