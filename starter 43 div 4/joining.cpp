#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int ans= a/5;
	    if(a%5==0){
	        ans--;
	    }
	    int res= b/5;
	    if(b%5==0){
	        res--;
	    }
	    cout<<(ans-res)<<endl;
	}
	return 0;
}