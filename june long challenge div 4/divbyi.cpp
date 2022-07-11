#include <iostream>
using namespace std;

int main(void) {
	int t;
	cin>> t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	      a[i]=i+1;
	    if(n==2)
	     cout<<"1 2"<<endl;
	   else if(n==3) 
	     cout<<"2 1 3"<<endl;
	   else 
	   {
	       for(int i=0;i<n;i++)
	       {
	           b[n-2*i-1]=a[n-i-1];
	           b[n-2*i-2]=a[i];
	       }
	       for(int i=0;i<n;i++)
	          cout<<b[i]<<endl;
	   }
	     
	}
	return 0;
}