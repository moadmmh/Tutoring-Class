#include<bits/stdc++.h>
using namespace std;

int main() {

    
    int n,Total=0;
    cin>>n;
    for(int i=1;i<=n;++i){
        int sum=0;
        for(int j=1;j<=i;++j){
            sum+=j;
        }
        Total+=sum;
    }
    cout<<"The sum of the above series is :"<<Total<<endl;
    return 0;
}
