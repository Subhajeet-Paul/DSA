#include <iostream>
#include<vector>
using namespace std;

bool isSame(int first[], int second[]){

    for(int i = 0; i < 26; i++){

        if(first[i] != second[i]){
            return false;
        }
    }
    return true;
}
bool checkInclusion(string s1, string s2) {

    int first[26] = {0};

    for(int i = 0; i < s1.length(); i++){
        first[s1[i] - 'a']++;
    }

    int windowSize = s1.length();

    for(int i = 0; i < s2.length(); i++){
        int idx = i;
        int windowIdx = 0;
        int second[26] = {0};

        while(idx < s2.length() && windowIdx < windowSize){
            second[s2[idx] - 'a']++;
            windowIdx++;
            idx++;
        }
        if(isSame(first, second)){

            return true;
        }

    }
    return false;
}

int main(){
    string s1 = "abc";
    string s2 = "eidcbaooo";

    cout << checkInclusion(s1, s2) << endl;
    return 0;
}