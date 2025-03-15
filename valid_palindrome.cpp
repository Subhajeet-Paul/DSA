#include <iostream>
#include <string>
using namespace std;


bool isAlphaNumerc(char c){
    if((c>='a' && c<='z')||(c>='A' && c<='Z')||(c>='0' && c<='9')){
        return 1;
    }
    return 0;
}

bool isPalindrome(string s) {
    int st = 0;
    int end = s.length()-1;
    while(st<end){
        if(!isAlphaNumerc(s[st])){
            st++;
            continue;
        }
        if(!isAlphaNumerc(s[end])){
            end--;
            continue;
        }
        if(tolower(s[st])!=tolower(s[end])){
            return 0;
        }
    }
    return 1;
}
int main(){
    string s = "mom";
    
    if(isPalindrome(s)){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }


    return 0;
}
