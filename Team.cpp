#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int p, v, t;
    cin>>n;
    int count1=0;
    for(int i=0;i<n;++i){
      int count2=0;
      cin>>p;
      if(p==1) count2++;
      cin>>v;
      if(v==1) count2++;
      cin>>t;
      if(t==1) count2++;

      if(count2>1) count1=count1 + 1;
    }
     cout<<count1;
    return 0;
}