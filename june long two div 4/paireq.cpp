#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p;
	    cin>>p;
	    int arr[p];
	    map<int,int>m;
	    
	    for(int i=0; i<p; i++){
	        cin>>arr[i];
	        m[arr[i]]++;
	    }
	    int ans= INT_MIN;
	    
	    for(auto pa: m){
	        ans= max(ans,pa.second);
	    }
	    cout<<p-ans<<endl;
	}
	return 0;
}