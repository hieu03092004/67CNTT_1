#include <bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n,B=1,A=0,cnt=0;
	cin>>n;
	vector<int>a;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		if(y!=0){
			A+=x;
			B=B-1+y;
			cnt++;
		}
		else
			a.push_back(x);
	}
	if(cnt!=n){
		sort(a.begin(),a.end(),greater<int>());
		for(int i=0;i<B && i<n-cnt;i++)
			A+=a[i];
	}
	cout<<A;
}