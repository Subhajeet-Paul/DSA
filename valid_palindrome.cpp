#include <iostream>
#include <string>
using namespace std;


bool isAlphaNumerc(char c){
    if((c>='a' && c<='z')||(c>='A' && c<='Z')||(c>='0' && c<='9')){
        return true;
    }
    return false;
}

bool isPalindrome(string s) {
    int st = 0 , end = s.length()-1;
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
            return false;
        }
    }
    return true;
}
int main(){
    string s = "mom";
    
    bool result = isPalindrome(s);

    if(result){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }


    return 0;
}
