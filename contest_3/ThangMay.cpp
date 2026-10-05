#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,ans=0;
    cin>>n>>k;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1,greater<int>());
    for(int i=1;i<=n;i+=k){
    	cout<<"a"<<"["<<i<<"]="<<a[i]<<endl;
    	ans+=(a[i]-1)*2;
	}
      
    cout<<ans;
    return 0;
}
