#include<bits/stdc++.h>
using namespace std;

int main() {

    int a,b,c;
    cout<<"Please Enter the three dimensions"<<endl;
    cin>>a>>b>>c;
    if(a<b+c && b<a+c && c<a+b){
        cout<<"Yes you can form a triangle"<<endl;
    }
    else {
        cout<<"No you can't !"<<endl;
    }

    return 0;
}
