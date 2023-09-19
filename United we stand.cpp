#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<ll> a(n);
        vector<ll> b;
        vector<ll> c;

        ll mx = -1;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            mx = max(mx, a[i]);
        }

        sort(a.begin(), a.end());

        if(mx == a[0]){
            cout << -1 << endl;
            continue; 
        } else {
            for(int i = 0; i < n; i++){
                if(mx != a[i]){
                    b.push_back(a[i]);
                } else {
                    c.push_back(a[i]);
                }
            }
        }

        cout << b.size() << " " << c.size() << endl;

        for(auto it: b){
            cout << it << " ";
        }
        cout << endl;

        for(auto it: c){
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
