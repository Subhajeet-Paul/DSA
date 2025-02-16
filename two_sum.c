# include<stdio.h>

int main(){
    int count=0;
    int arr[] = {2, 7, 11, 15,5,9,6};
    int target;
    printf("Enter the target value: ");
    scanf("%d",&target);

    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]+arr[j]==target){
                printf("The pair is (%d,%d)\n",arr[i],arr[j]);
                count++;
            }
        }
    }
    if(count==0){
        printf("No such pair");
    }
    return 0;
}