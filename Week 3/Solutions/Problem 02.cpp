#include<bits/stdc++.h>
using namespace std;

int main() {
 
    int n,sum=0,x=0;
    cin>>n;
    for(int i=1;i<=n;++i){
        x=(x*10)+1;
        sum+=x;
    }
    cout<<"The sum of the series is :"<<sum<<endl;
    
    return 0;
}
