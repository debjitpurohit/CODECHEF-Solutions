#include <iostream>
using namespace std;

int main(){
    int a;
    cin>> a;
    while(a--){
        int n,m,k;
        cin>>n>>m>>k;
        if (k >= n && k < m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}
