#include <bits/stdc++.h>
using namespace std;
int cmp(pair<int,int>a,pair<int,int>b){
    return a.first<b.first;
}
int main() {
	// your code goes here
int n,x;
cin>>n>>x;
int A[n];
vector<pair<int,int>>v(n);
for(int i=0;i<n;i++){
    cin>>A[i];
    v[i]={A[i],i};
}
vector<int>res;
sort(v.begin(),v.end(),cmp);
int flag=0;
for(int s=0;s<=n-3;s++){
    int l=s+1;
    int r=n-1;
    while(l<n && r<n && l<r){
        int sum=v[s].first+v[l].first+v[r].first;
        if(sum==x){
            res={v[s].second+1 , v[l].second+1 , v[r].second+1};
            flag=1;
            break;
        }
        else if(l<n && sum<x){
            l++;
        }
        else if(r<n && sum>x){
            r--;
        }
    }
    if(flag)break;
}
if(res.size()<3)cout<<"IMPOSSIBLE";
else{
sort(res.begin(),res.end());
for(auto x :res){
    cout<<x<<" ";
}
}

}
