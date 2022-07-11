#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    
	    string p;
	    cin>>p;
	    
	    string p1= "";
	    for(int i=0; i<p.length();i++){
	        if(p[i]=='A')
	        p1.push_back('T');
	        
	        else if(p[i]=='T')
	        p1.push_back('A');
	        else if(p[i]=='C')
	        p1.push_back('G');
	        
	        else if(p[i]=='G')
	        p1.push_back('C');
	        
	        else
	        p1.push_back('C');
	       
	    }
	    cout<<p1<<endl;
	}
	return 0;
}