#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){
        int n,a,b,cnt=0,cnt2=0;
        cin>>n;
        int arr[n],sum=0;
        for(int i=0; i<n ; i++){
            cin>> arr[i];
            sum = sum+ arr[i];
            if (arr[i]==1)
            cnt++;
            else
            cnt2++;
            
        }
        if(n%2 !=0)
        cout<<"-1"<<endl;
        else{
            if(cnt>cnt2)
            cout<<(cnt-cnt2)/2<<endl;
            else
            cout<<(cnt2-cnt)/2<<endl;
        }
    }
    return 0;
}