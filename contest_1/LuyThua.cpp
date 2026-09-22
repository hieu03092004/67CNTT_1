#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int mod = 10000;

ll binpow(ll a, ll b){
	if(b == 0) return 1;
	ll t = binpow(a, b / 2);
	if(b % 2 == 1) 
        return ((t%mod*t%mod)%mod * a%mod)%mod;
	return ((t % mod) * (t % mod)) % mod;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
	ll x, n; cin >> x >> n;
	cout << binpow(x, n);
    return 0;
}