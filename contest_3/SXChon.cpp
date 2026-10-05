#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++){
        int min_pos=i,min_value=a[i];
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_pos]){
                min_pos=j;
                min_value=a[j];
            }

        }
        if(min_pos!=i)
            swap(a[i],a[min_pos]);
        for(int k=0;k<n;k++){
            if(k==i || k==min_pos)
                cout<<"["<<a[k]<<"]";
            else
                cout<<a[k];
            if(k!=n-1)
                cout<<" ";
        }
        if(i!=n-2)
            cout<<endl;
    }
    return 0;
}
