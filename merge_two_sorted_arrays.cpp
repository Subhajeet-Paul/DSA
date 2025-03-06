#include <iostream>

using namespace std;

int main() {

    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6};

    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    int totalLength = len1 + len2;

    int arr3[totalLength];

    int i = len1-1, j = len2-1, k = totalLength-1;

    while(i >= 0 && j >= 0) {
        if(arr1[i] > arr2[j]){
            arr3[k] = arr1[i];
            i--;
            k--;
        } else{
            arr3[k] = arr2[j];
            j--;
            k--;
        }
    }
    if(i < 0 && j >= 0) {
        while(j >= 0) {
            arr3[k] = arr2[j];
            j--;
            k--;
        }
    }
    if(j < 0 && i >= 0) {
        while(i >= 0) {
            arr3[k] = arr1[i];
            i--;
            k--;
        }
    }

    for(int i = 0; i < totalLength; i++) {
        cout << arr3[i] << " ";
    }
    return 0;
}