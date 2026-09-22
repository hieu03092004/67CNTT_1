#include<bits/stdc++.h>
using namespace std;
using ll=long long;
long long solve(ll L,ll p,ll k){
    int period=2*(L-1);
    int t=(p-1+k)%period;
    if(t<=L-1)
        return t+1;
    return period-t+1;
}
int main(){
    ll n,m,y,x,k;
    cin>>n>>m>>y>>x>>k;
    ll xd=solve(n,y,k);
    ll yd=solve(m,x,k);
    cout<<xd<<" "<<yd<<endl;
}
    