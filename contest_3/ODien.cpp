#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n,greater<int>());
    int available=1;
    if(available>=m){
        cout<<"0";
        return 0;
    }
	for(int i=0;i<n;i++){
		available+=a[i]-1;
        if(available>=m){
            cout<<i+1;
            return 0;
        }
	}
	cout<<"-1";
}
