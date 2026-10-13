#include<bits/stdc++.h>
using namespace std;
int cnt[100005];
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	long long ans=0;
	int n,maxValue=-1;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		maxValue=max(maxValue,x);
		cnt[x]++;
	}
	for(int i=1;i<=maxValue;i++){
		if(cnt[i]!=0)
			ans+=1LL*cnt[i]*(cnt[i]-1)/2;
	}
	cout<<ans;
}