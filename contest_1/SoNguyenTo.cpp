#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n;
    cin>>n;
    if(n<2){
        cout<<"NO";
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
    