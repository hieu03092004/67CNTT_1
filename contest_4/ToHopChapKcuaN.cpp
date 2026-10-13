#include<bits/stdc++.h>
using namespace std;
int n,k,X[100],used[50];
void Try(int i){
	for(int j=X[i-1]+1;j<=n;j++){
		X[i]=j;
		if(i==k){
			for(int l=1;l<=k;l++)
				cout<<X[l];
			cout<<endl;
		}
		else
			Try(i+1);
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	cin>>k>>n;
	Try(1);
}