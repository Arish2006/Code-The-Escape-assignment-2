#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s) {
    int left = 0, right = (int)s.length() - 1;
    while (left < right) {
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;
        if (isalpha(s[left])) s[left] = tolower(s[left]);
        if (isalpha(s[right])) s[right] = tolower(s[right]);
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    string s;
    getline(cin, s);
    cout << (checkPalindrome(s) ? "true" : "false");
    return 0;
}
