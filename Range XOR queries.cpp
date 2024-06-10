#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,q;
	cin>>n>>q;
	int A[n];
	for(int i=0;i<n;i++){
	    cin>>A[i];
	    
	}
	int pre[n];
	pre[0]=A[0];
	for(int i=1;i<n;i++){
	    pre[i]=pre[i-1]^A[i];
	}
	while(q--){
	    int l,r;
	    cin>>l>>r;
	    l--;
	    r--;
	    if(l-1>=0){
	    int x=(pre[l-1])^(pre[r]);
	    cout<<x<<endl;}
	    else{
	        cout<<pre[r]<<endl;
	    }
	}
	
	
}
