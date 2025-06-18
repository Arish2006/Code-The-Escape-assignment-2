#include <bits/stdc++.h>
using namespace std;

vector<string> helloWorld(int N) {
    vector<string> ans(N);
    for (int i = 0; i < N; i++) {
        if ((i + 1) % 3 == 0) {
            if ((i + 1) % 5 == 0)
                ans[i] = "HelloWorld";
            else
                ans[i] = "Hello";
        } else if ((i + 1) % 5 == 0) {
            ans[i] = "World";
        } else {
            ans[i] = to_string(i + 1);
        }
    }
    return ans;
}

int main() {
    int N;
    cin >> N;
    auto res = helloWorld(N);
    for (auto &s : res) {
        cout << s << "\n";
    }
    return 0;
}
