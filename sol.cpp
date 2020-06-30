#include <bits/stdc++.h>

using namespace std;

long long a, b, sum, ans;

void solve() {
	cin >> a >> b;
	sum = a + b;
	int a[1000], cnt = 0;
	while(sum != 0){
		a[cnt] = sum % 10;
		sum /= 10;
		cnt++;
	}
	ans = 0;
	for(int i = cnt - 1; i >= 0; i--){
		if(a[i] == 0 || a[i] == 6 || a[i] == 9) ans += 6;
		else if(a[i] == 1) ans += 2;
		else if(a[i] == 2 || a[i] == 3 || a[i] == 5) ans += 5;
		else if(a[i] == 4) ans += 4;
		else if(a[i] == 7) ans += 3;
		else if(a[i] == 8) ans += 7;
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}