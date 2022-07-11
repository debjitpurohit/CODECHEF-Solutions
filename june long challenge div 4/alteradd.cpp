#include <iostream>
using namespace std;

int main() {
	 int t,b,c;
    cin>> t;
    while(t--){
        cin>>b>>c;
        if((c-b)%3==0 || (c-b)%3==1)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;     
        
    }
	return 0;
}