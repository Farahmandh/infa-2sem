#include <iostream>
#include <stack>
#include <string>
using namespace std;
int To_int(const string& s) {
    int answer = 0;
    int sign = 1;
    size_t start = 0;
    if(s[0] == '-') {
        sign = -1;
        start = 1;
    }
    for(size_t i = start; i < s.size(); ++i) {
        answer = answer*10 + (int(s[i]) - 48);
    }
    answer *= sign;
    return answer;
}

int main() {
    string c;
    stack<int> v;
    while(cin >> c) {
        if(c == "+") {
            int a = v.top();
            v.pop();
            int b = v.top();
            v.pop();
            v.push(a+b);
        } else if(c == "-") {
            int a = v.top();
            v.pop();
            int b = v.top();
            v.pop();
            v.push(b-a);
        } else if(c == "*") {
            int a = v.top();
            v.pop();
            int b = v.top();
            v.pop();
            v.push(a*b);
        } else if(c == "/") {
            int a = v.top();
            v.pop();
            int b = v.top();
            v.pop();
            v.push(b/a);
        } else {
            int n = To_int(c);
            v.push(n);
        }
    }
    cout<<v.top();
}
