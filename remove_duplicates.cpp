#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string str, int n) {
    vector<int> hash(26, 0);
    string result;
    for (int i = 0; i < n; ++i) {
        if (!hash[str[i] - 'a']) {
            result += str[i];
            hash[str[i] - 'a'] = 1;
        }
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    cout << removeDuplicates(str, str.size()) << endl;
    return 0;
}
