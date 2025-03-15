#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "aabasabcsabc";
    string part = "abc";

    while(str.length()>0 && str.find(part) < str.length()){
        str.erase(str.find(part), part.length());
    }

    cout<<"String after removing all occurrences of 'abc': ";
    cout << str << endl;
    return 0;
}