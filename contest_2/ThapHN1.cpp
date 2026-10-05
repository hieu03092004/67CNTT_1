#include<bits/stdc++.h>
using namespace std;
void HN(int n,char a,char b,char c){
    if(n==1){
    	cout<<a<<"->"b<<endl;
    }
    else{
        HN(n-1,a,c,b);
        cout<<a<<"->"b<<endl;
        HN(n-1,c,b,a);
    }
}
int main(){
    int n;
   	cin>>n;
   	HN(n,'A','B','C');
}
