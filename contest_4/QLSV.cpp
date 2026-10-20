#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string TenSV;
    int Toan, Ly, Hoa;
    float DTB;
};


bool cmp( SinhVien x, SinhVien y) {
    return x.DTB > y.DTB;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    cin.ignore();
    SinhVien a[n];

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin,s);
        a[i].TenSV=s;
        cin >> a[i].Toan >> a[i].Ly >> a[i].Hoa;

        a[i].DTB = (a[i].Toan + a[i].Ly + a[i].Hoa) / 3.0f;
        cin.ignore();
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << a[i].TenSV << " "<< fixed << setprecision(2)<< a[i].DTB;
        if(i!=n-1)
            cout<<"\n";
    }

    return 0;
}
