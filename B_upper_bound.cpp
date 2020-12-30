// RM
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
vector < ll > a;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, k;
    scanf("%lld%lld", &n , &k);
    for(ll i = 0; i < n; i++)
    {
        ll d;
        scanf("%lld", &d);
        a.push_back(d);
    }


    while(k--)
    {
        ll x;
        scanf("%lld", &x);
        auto it = upper_bound(a.begin(), a.end(),x);
        if(it != a.end())
        {
            cout << it - a.begin() << '\n';
        }
        else
        {
            cout << (ll)a.size() << '\n';
        }

    }




}

