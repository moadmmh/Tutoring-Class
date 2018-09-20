//Solution for the Last problem (Hiba's lucky numbers)

#include<iostream>
using namespace std;


int main() {

    long long n;
    cin>>n;
    int x=n%10;
    if(x==7){
        cout<<"YES"<<endl;
    }
    else if (x==4){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}
