#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int d=a-b;
	    if(d<=0){
	        cout<<"0"<<endl;
	    }
	    else if(d%4==0){
	        cout<<d/4<<endl;
	    }
	    else{
	        cout<<(d/4)+1<<endl;
	    }
	}
	return 0;
}