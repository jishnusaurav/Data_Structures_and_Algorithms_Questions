

// Write your code here
#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<pair<<int,int>> v;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        sort(vector.begin(),vector.end());
        int idx=0;
        for(int i=0;i<v.size();i++){
            if(v[idx].second<=v[idx].first)
            {
                v[idx].second=max(v[idx].second,v[i].second);
            }
            else
            idx++;
            v[idx]=v[i];
        }
    }
    while(q--){
        int k;
        cin>>k;
        int ans=-1;
        for(int j=0;j<idx;j++){
            if(v[j].second-v[j].first>k)
            {
                ans=v[i].first+k-1;
                break;

            }
            else
            k=k-(v[j].second-v[j].first+1);

        }
    }
    cout<<ans<<end;
}
