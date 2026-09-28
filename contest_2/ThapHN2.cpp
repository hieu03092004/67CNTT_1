#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int cnt=0,k;
void HN(int n,char a,char b,char c){
    if(n==1){
    	cnt++;
    	if(cnt>k)
    		return;
        mp[a]--;
        mp[b]++;
        
    }
    else{
        HN(n-1,a,c,b);
        cnt++;
        if(cnt>k)
            return;
        mp[a]--;
        mp[b]++;
        
        HN(n-1,c,b,a);
    }
}
int main(){
    int n;
    cin>>n>>k;
    mp['A']=n;
	mp['B']=0;
	mp['C']=0;
    HN(n,'A','B','C');
    cout<<mp['A']<<" "<<mp['B']<<" "<<mp['C'];
}
