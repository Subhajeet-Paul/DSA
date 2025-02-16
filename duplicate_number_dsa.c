# include<stdio.h>

void duplicate_number(int arr[],int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j||arr[i]==NULL||arr[j]==NULL){
                continue;
            }
            else{
                if(arr[i]==arr[j]){
                    printf("Duplicate value is : %d\n",arr[i]);
                    arr[i]=NULL;
                    arr[j]=NULL;
                }
                else{
                    printf("nothing duplicate is found\n ");
                }
            }
        }
    }
   
}

int main(){
    int n = 5;
    int array[] = {1,2,3,4,3};

    duplicate_number(array,n);

    return 0;
}