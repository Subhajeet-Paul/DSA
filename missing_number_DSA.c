# include<stdio.h>

int missing_number(int arr[],int n){
    int sum1,sum2;

    sum1=0;
    for(int i=0;i<n-1;i++){
        sum1 = sum1 + arr[i];
    }
    sum2 = (n*(n+1))/2 ;
    int dif = sum2 - sum1;

    return dif ;
}

int main(){
    int n = 5;
    int array[] = {1,2,4,5};

    int dif = missing_number(array,n);
    printf("The missing number is : %d\n",dif);

    return 0;
}