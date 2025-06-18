#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr, int m) {
    int n = arr.size();
    for (int i = m + 1; i < (m + n + 1) / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n + m - i];
        arr[n + m - i] = temp;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    reverseArray(arr, m);
    for (int x : arr) cout << x << " ";
    return 0;
}
