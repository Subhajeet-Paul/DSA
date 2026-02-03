#include<iostream>
#include<vector>
using namespace std;


// ------------------ BROUTE FORCE-----------------------

// int countInversion(vector<int> arr){
//     int count =0;
//     for (int i=0; i<arr.size()-1; i++){
//         for (int j=i+1; j<arr.size()-1;j++){
//             if(i<j && arr[i]>arr[j]){
//                 count++;
//             }
//         }
//     }
//     return count;
// }



//-------------------------OPTIMAL (WITH MERGE SORT)---------------------------

int merge(vector<int>&arr, int st,int mid, int end){
    vector<int> temp;
    int i=st, j=mid+1;
    int count=0;

    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
            count+= (mid-i+1);
        }
    }

    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx=0; idx<temp.size(); idx++){
        arr[idx+st]= temp[idx];
    }

    return count;
}


int mergeSort(vector<int>&arr, int st, int end){
    if(st < end){
        int mid = st + (end-st)/2;

        int leftInversionCount = mergeSort(arr,st,mid);
        int rightInversionCount = mergeSort(arr,mid+1,end);

        int invCount= merge(arr,st,mid,end);

        return invCount+leftInversionCount+rightInversionCount;
    }

    return 0;
}

int main(){
    // vector<int> arr= {6,3,5,2,7};
    vector<int> arr= {1,3,5,10,2,6,8,9};

    // int count =countInversion(arr);
    // cout <<count<<endl;

    int count= mergeSort(arr,0,arr.size()-1);
    cout <<count<<endl;
    return 0;
}