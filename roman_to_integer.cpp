#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<char, int> map;
    map['I'] = 1;
    map['V'] = 5;
    map['X'] = 10;
    map['L'] = 50;
    map['C'] = 100;
    map['D'] = 500;
    map['M'] = 1000;

    string s;
    
    cout << "Enter a Roman digit: ";
    cin >> s;
    int lastIndex = s.size() - 1;
    int result = map[s[lastIndex]];

    for (int i = lastIndex ; i > 0; i--){
        if (map[s[i]] > map[s[i - 1]]){
            result -= map[s[i - 1]];
        } else {
            result += map[s[i-1]];
        }
    }
    cout << result;

    return 0;
}
