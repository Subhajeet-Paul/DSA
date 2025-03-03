#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x , a, temp , reversedNum = 0 ;
    cout<< "enter your number : ";
    cin>>x;
    a = x;
    while(x > 0 ){
        temp = x % 10 ;

        x = x/10 ;
        reversedNum = reversedNum * 10 + temp ;
    }
    if ( reversedNum == a ){
        cout<< "this number is a palindrome number";
    }else {
        cout << "this number is not a palindrome number";
    }

    return 0;
}