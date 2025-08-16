#include <iostream>
#include <vector>
using namespace std;


void printsubset(vector<int> &nums, vector<int> &ans, int i,vector<vector<int>>&allsubset){
    if (i==nums.size()){
        allsubset.push_back(ans);
        return;
    
    }
    ans.push_back(nums[i]);
    printsubset(nums, ans, i+1,allsubset);
    ans.pop_back();
    int index = i+1;
    while (index<nums.size() && nums[index]==nums[i]){
        index++;
    }
    printsubset(nums, ans, index,allsubset);
}
int main(){
    vector<int> nums = {1,2,2};
    vector<int> ans;
    vector<vector<int>> allsubset;
    // 
    printsubset(nums, ans, 0,allsubset);
    for (vector<int> val : allsubset){
        for (int i : val){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}