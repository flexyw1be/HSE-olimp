#include <bits/stdc++.h>

#define pb push_back
#define pf push_front
#define F first
#define INF 10e9 + 7
#define S second
#define endl "\n"
#define loop(i, l, n) for (ll i = l; i < ll(n); i++)
#define bloop(i, n, l) for (ll i = n; i > ll(l); i--)
#define cin(x) for(auto &o : x) cin >> o
#define cout(x) for(auto o : x) cout << o << ' '; cout << '\n'
#define eps 1e-12
#define sqr(a) ((a)*(a))
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define END {cout<< 0; return 0}

using namespace std;
typedef long long ll;
typedef long double ld;


int main() {
    ll n;
cin >> n;
vector<vector<int>> dp(n + 1, vector<int>(3, 0));
dp[0][0] = 1;
for (int i = 50; i <= n; i++) {
if (i >= 50) {
    dp[i][0] = dp[i - 50][0];
}
if (i >= 100) {
dp[i][1] = dp[i - 100][0] + dp[i - 100][1];
}
if (i >= 200) {
dp[i][2] = dp[i - 200][0] + dp[i - 200][1] + dp[i - 200][2];
}
}
cout << dp[n][0] + dp[n][1] + dp[n][2] << endl;
}