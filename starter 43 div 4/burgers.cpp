#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int t;
    cin>> t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if (a < b) {
	        cout<< a<<endl;
	    }
	    else {
	        cout<<b << endl;
	    }
        
    }
	return 0;
}