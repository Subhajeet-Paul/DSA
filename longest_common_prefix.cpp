#include <iostream>
#include <vector>
#include <string>
using namespace std;

string findprefix(const vector<string> &strs) {

    string ans = "";

    if (strs.empty()){
        return "";
    } 
    if (strs.size() == 1){
        return strs[0];
    } 
        
    int minlength = strs[0].length();
    
    for (const string &s : strs) {
        if (s.length() < minlength) {
            minlength = s.length();
        }
    }
    
    for (int i = 0; i < minlength; i++) {
        char c = strs[0][i];
        for (const string &s : strs) {
            if (s[i] != c) {
                return ans;
            }
        }
        ans += c;
    }
    return ans;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    string ans = findprefix(strs);
    cout << ans;
    return 0;
}
