#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    ll n;
    cin>>n;
    ll sum=1;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            sum+=i;
            if(i!=n/i)
                sum+=n/i;
        }
    }
    if(sum == n)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}