#include<bits/stdc++.h>
using namespace std;


int main() {


    int n;
    cin>>n;
    for(int i=1;i<=10;++i){
        for(int j=1;j<=n;++j){
            cout<<j<<"x"<<i<<"="<<i*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
