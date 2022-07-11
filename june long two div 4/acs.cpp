#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p;
	    cin>>p;
	    
	    int ans= p/100;
	    int rem= p%100;
	    if((ans+rem)<=10){
	        cout<<(ans+rem)<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}