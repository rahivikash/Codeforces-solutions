#include<bits/stdc++.h>
using namespace std;
 
void func(int w){
    if(w%2==0 && w>2) cout<<"YES";
    else cout<<"NO";
}
 
int main(){
   int w;
   cin>>w;
   func(w);
   return 0;
}