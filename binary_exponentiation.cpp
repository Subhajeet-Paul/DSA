#include<iostream>
#include<vector>

using namespace std;



void calculatepower(int base,int exp){
    int value=1;
    
    while(exp > 0){
        if(exp % 2==1){
            value*=base;
        }
        base*=base;
        exp/=2;
    }
    cout<<"The value of base power exponent is : "<<value;
}

int main(){
    int base,exp;
    
    cout<<"Enter the base : ";
    cin>> base;
    cout<<"Enter the exponent: ";
    cin>> exp;

    calculatepower(base,exp);
    return 0;
}