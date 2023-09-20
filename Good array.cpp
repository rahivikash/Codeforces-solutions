#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
 
        ll a=0;
        ll b=0;
        for(int i=0;i<x;++i){

            int y; cin>>y;
            if(y==1) a+=2;
            else a++;
            b+=y;
        }
        if(x==1){ cout<<"no\n";
        continue;}
        if(a<=b){
            cout<<"yes\n";
        }else cout<<"no\n";
    }

}
