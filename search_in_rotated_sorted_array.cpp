#include<iostream>
#include<vector>

using namespace std;

int search(int arr[], int st, int end, int target) {
    int mid;
    while (st <= end) {
        mid = st + (end - st) / 2;

        if (arr[mid] == target) {
            return mid;
        } else {
            if (arr[mid] >= arr[st]) {
                if (arr[st] <= target && target <= arr[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } else {
                if (arr[mid] <= target && target <= arr[end]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int st = 0;
    int end = 6;
    
    int index = search(arr, st, end, target);
    cout << index << endl;
    return 0;
}
