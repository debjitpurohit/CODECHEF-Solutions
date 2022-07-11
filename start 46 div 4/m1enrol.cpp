#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b>a){
            cout<<(b-a)<<endl;
            
        }
        else if(a >=b) {
            cout<<"0"<<endl;
        }       
    }
	// your code goes here
	return 0;
}
