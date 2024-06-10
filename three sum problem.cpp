#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,x;
	cin>>n>>x;
	
	int l=0;
	int r=0;
	int A[n];
	for(int i=0;i<n;i++){
	    cin>>A[i];
	}
	int flag=0;
	vector<int>res;
	for(int l=0;l<n;l++){
	    if(flag)break;
	    unordered_map<int,int>m;
	    for(int r=l+1;r<n;r++){
	        if(m.find(x-A[l]-A[r])!=m.end()){
	            flag=1;
	            res={l+1,m[x-A[l]-A[r]]+1,r+1};
	            break;
	        }
	        m[A[r]]=r;
	    }
	    m.clear();
	    if(flag)break;
	}
	if(res.size()<3)cout<<"IMPOSSIBLE";
	else{
	for(auto it:res){
	    cout<<it<<" ";
	}
	}
	
	
	

}
