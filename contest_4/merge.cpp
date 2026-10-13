#include <bits/stdc++.h>
using namespace std;
int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	int i=0,j=0,cnt=0;
	while(i<n && j<m){
		if(a[i]<=b[j]){
			cout<<"b"<<i+1<<" ";
			i++;
		}
		else{
			cout<<"c"<<j+1<<" ";
			j++;
		}

	}
	while(i<n){
		cout<<"b"<<i+1<<" ";
		i++;
	}
	while(j<m){
		cout<<"c"<<j+1<<" ";
		j++;
	}

}