#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;



// int majorityElement(vector<int>& nums) {
//     for (int val:nums){
//         int count=0;
//         for(int i =0; i<nums.size();i++){
//             if(val==nums[i]){
//                 count++;
//             }
//         }
//         if(count>nums.size()/2){
//             return val;
//         }
        
//     }
//     return -1;
// }

int majorityElement(vector<int>& nums){

    sort(nums.begin(), nums.end());
    int count = 0;
    for(int i = 1; i < nums.size(); i++){
        if(nums[i]==nums[i - 1]){
            count++;

            if(count>((nums.size()/2)-1)){
                return nums[i];
            }
        }else{
            count=1;
        }
    }

    return -1;
}

// int majorityElement(vector<int>& nums) {
    
//     sort(nums.begin(), nums.end());

//     int count = 1; 
//     int n = nums.size();

    
//     for (int i = 1; i < n; i++) {
//         if (nums[i] == nums[i - 1]) {
//             count++;  
//             if (count > n / 2) {
//                 return nums[i]; 
//             }
//         } else {
//             count = 1;  
//         }
//     }

//     return -1;
// }


int main(){
    vector<int>nums={1,2,2,1,1,1};

    // int value=majorityElement(nums);
    int value=majorityElement(nums);

    cout<<value<<endl;
    return 0;
}

// #include<iostream>
// #include<vector>
// using namespace std;

// int majorityElement(vector<int>& nums) {
//     for (int val : nums) {
//         int count = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             if (val == nums[i]) {
//                 count++;
//             }
//         }
//         if (count > nums.size() / 2) { // Corrected condition
//             return val;
//         }
//     }
//     return -1; // Return -1 if no majority element is found
// }

// int main() {
//     vector<int> nums = {1, 2, 2, 1, 1, 1};

//     int value = majorityElement(nums);
//     cout << value << endl;

//     return 0;
// }



