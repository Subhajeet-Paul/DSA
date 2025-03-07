#include <iostream>
#include<vector>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int pivot,temp;
    bool flag = false;
    int length = nums.size();
    int i = length-1;
    int pivotindex;


    for(int j= length-1; j>=0; j--){
        if(nums[j] > nums[j-1]){
            pivot= j-1;
            pivotindex = j; // taking pivotindex value (pivot index + 1) to reverse the elements after pivot
            temp  = nums[pivot];
            nums[pivot] = nums[length-1];
            nums[length-1] = temp;
            flag= true;
            break;
        }
    }
   
    if(flag){
        while(pivotindex < i ){
            temp = nums[pivotindex];
            nums[pivotindex] = nums[i];
            nums[i]= nums[temp];
    
            pivotindex++;
            i--;
        }
        
    }else{
        cout<<"all the elements are arranged in decreasing order so next permutation is not possible !!!";
    }
    
   
}

int main() {
    vector<int> nums = {1, 2, 3};
    nextPermutation(nums);

    for (int i = 0; i <nums.size() ; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}