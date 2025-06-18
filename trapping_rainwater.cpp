#include <bits/stdc++.h>
using namespace std;

long long getTrappedWater(long long *arr, int n) {
    if (n <= 2) return 0;
    long long ans = 0;
    long long current = arr[0];
    int i = 1;

    long long mx = 0;
    for (int j = 0; j < n; j++)
        mx = max(mx, arr[j]);

    int left = 0, right = 0;
    for (int j = 0; j < n; j++) {
        if (arr[j] == mx) { left = j; break; }
    }
    for (int j = n - 1; j >= 0; j--) {
        if (arr[j] == mx) { right = j; break; }
    }

    for (i = 0; i < left; i++) {
        current = max(current, arr[i]);
        ans += current - arr[i];
    }

    current = arr[n - 1];
    for (i = n - 1; i > right; i--) {
        current = max(current, arr[i]);
        ans += current - arr[i];
    }

    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    cout << getTrappedWater(v.data(), n);
    return 0;
}
