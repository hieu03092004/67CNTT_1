#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,x;
    cin>>n>>k;
    cin>>x;
    int a[n-1];
    for(int i=0;i<n-1;i++)
        cin>>a[i];
    sort(a,a+n-1);
    int t=0;
    for(int i=0;i<k;i++)
        t-=a[i];
    for(int i=k;i<n-1;i++)
        t+=a[i];
    cout<<x+t;
    return 0;
}
