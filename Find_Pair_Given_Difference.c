#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        int f=-1;
        for(int i=0;i<n;i++)
            cin>>arr[i];
            unordered_map <int,int> map;
            for(int i=0;i<n;i++) map[arr[i]]=1;
            for(int i=0;i<n;i++){
                if(map[arr[i]+x]){
                f=1;
                break;
                }            
            }
        cout<<f<<endl;
    }
	return 0;
}
