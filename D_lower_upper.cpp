
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define MX 100050
ll a[MX];
ll bs_upper_bound(ll a[], ll n, ll x) {
    ll l = 0;
    ll h = n; // Not n - 1
    while (l < h) {
        ll mid =  l + (h - l) / 2;
        if (x >= a[mid]) {
            l = mid + 1;
        } else {
            h = mid;
        }
    }
    return l;
}

ll bs_lower_bound(ll a[], ll n, ll x) {
    ll l = 0;
    ll h = n; // Not n - 1
    while (l < h) {
        ll mid =  l + (h - l) / 2;
        if (x <= a[mid]) {
            h = mid;
        } else {
            l = mid + 1;
        }
    }
    return l;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n, k; cin >> n;
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cin >> k;
    while(k--)
    {
        ll l, r; cin >> l >> r;
        ll lowe_1_l = bs_lower_bound(a , n , l);

        ll uper_r_1 = bs_upper_bound(a, n, r);
        cout << uper_r_1 - lowe_1_l << ' ';
    }
    cout << '\n';

}
