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
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i: a) cin >> i;
    for (int i = 0; i < n; ++i)
        if (a[i] % 2 != 0) {
            int j = i;
            while (j < n && a[j] % 2 != 0) ++j;
            string ans(n - 1, 'x');
            if (i > 0) ans[i - 1] = '+';
            if (j < n) ans[j - 1] = '+';
            cout << ans;
            return 0;
        }
}


