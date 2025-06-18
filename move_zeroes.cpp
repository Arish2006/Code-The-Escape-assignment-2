#include <bits/stdc++.h>
using namespace std;

void pushZerosAtEnd(vector<int> &arr) {
    int n = arr.size(), count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) arr[count++] = arr[i];
    }
    while (count < n) {
        arr[count++] = 0;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    pushZerosAtEnd(arr);
    for (int x : arr) cout << x << " ";
    return 0;
}
