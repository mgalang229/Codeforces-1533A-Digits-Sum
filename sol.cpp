#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// the condition comes true in every multiple of 10
		cout << (n + 1) / 10 << '\n';
	}
	return 0;
}
