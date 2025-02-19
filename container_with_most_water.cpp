#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    int sizearr,height,width,area,maxarea=0;  // variables declearation

    cout<<"Enter the size of the array : ";
    cin>>sizearr;
    int arr[sizearr];
    cout<<"Enter the elements of the array : ";
    for(int j=0;j<sizearr;j++){
        cin>>arr[j];
    }

    // <---------------------- BRUTE FORCE APPROACH ------------------------------>


    // for(int i=0; i<sizearr; i++){
    //     for(int j=i+1; j<sizearr; j++){
    //         width=j-i;
    //         height=min(arr[i],arr[j]);
    //         area=height*width;
    //         maxarea=max(area,maxarea);
    //     }
    // }



    // <--------------------------- TWO POINTER APPROACH ------------------------->


    int start= 0;
    int end = sizearr-1;

    while(start < end){
        height = min(arr[start],arr[end]);
        width = end-start;
        area= height * width;
        maxarea= max(area,maxarea);

        if(arr[start] < arr[end]){
            start++;
        }
        else if(arr[start] == arr[end]){
            start++;
        }
        else{
            end--;
        }
    }


    cout<<"The maximum amount of water that can be stored is : "<<maxarea<< " liters"<<endl;


    return 0;
}