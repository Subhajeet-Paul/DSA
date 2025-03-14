#include <iostream>
#include <vector>
#include <string>
using namespace std;

string find_prefix(const vector<string> &strs) {
    if (strs.empty()) return "";
    if (strs.size() == 1) return strs[0];
    
    string ans = "";
    int min_length = strs[0].length();
    
    for (const string &s : strs) {
        if (s.length() < min_length) {
            min_length = s.length();
        }
    }
    
    for (int i = 0; i < min_length; ++i) {
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
    string ans = find_prefix(strs);
    cout << ans;
    return 0;
    
}
