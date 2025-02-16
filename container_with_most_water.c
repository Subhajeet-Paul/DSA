#include<stdio.h>


int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
        
    int max_area=0;
    int length=n-1;
    int j=n-1;
    int low =0,high=n-1;
    while(low!=high){
        for(int i=low;i<high;i++){
            if(a[i]<a[j] && max_area<a[i]*length){
                max_area=(a[i]*length);
            }
            
            else if(a[i]>a[j] && max_area<a[j]*length){
                max_area=(a[j]*length);
            }
        }
        low++;
        high--;
        j--;
        length=length-2;
    }
    
    printf("Maximum area of container is: %d",max_area);
    return 0;
}