#include <bits/stdc++.h>
using namespace std;
int main() {
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   		cin>>a[i];
   	int pivot=a[n-1];
   	int i=-1;
   	for(int j=0;j<n-1;j++){
   		if(a[j]<=pivot){
   			i++;
   			swap(a[i],a[j]);
   		}
   	}
   	++i;
   	swap(a[i],a[n-1]);
   	for(int k=0;k<n;k++){
   		if(k==i)
   			cout<<"["<<a[k]<<"]";
   		else
   			cout<<a[k];
   		if(k!=n-1)
   			cout<<" ";
   	}

}