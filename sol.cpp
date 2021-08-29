#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		// print even positions (zero-based)
		for (int i = 0; i < (int) s.size(); i++) {
			if (i % 2 == 0) {
				cout << s[i];
			}
		}
		cout << " ";
		// print odd positions (zero-based)
		for (int i = 0; i < (int) s.size(); i++) {
			if (i % 2 == 1) {
				cout << s[i];
			}
		}
		cout << '\n';
	}
	return 0;
}
