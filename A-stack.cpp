#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    int n;
    while(n != 0){
    cin >> n;
        if (n > 0)
            s.push(n);
        else if (not s.empty()) {
            if (abs(n) < s.top())
                s.top() += n;
            else
                s.pop();
        }
    }
    if (s.empty())
        std::cout << 0 << ' ' << -1;
    else
        std::cout << s.size() << ' ' << s.top();
}
