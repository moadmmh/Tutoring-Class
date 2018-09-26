#include<bits/stdc++.h>
using namespace std;

int main() {


    int a,b,c;
    cout<<"Please Enter the three numbers"<<endl;
    cin>>a>>b>>c;
    int maximum,minimum,middle;
    if(a>b && a>c){
        maximum=a;
        if(b>c){
            minimum=c;
            middle=b;
        }
        else {
            minimum=b;
            middle=c;
        }
    }
    if(c>b && c>a){
        maximum=c;
        if(b>a){
            minimum=a;
            middle=b;
        }
        else {
            minimum=b;
            middle=a;
        }
    }
    if(b>a && b>c){
        maximum=b;
        if(a>c){
            minimum=c;
            middle=a;
        }
        else {
            minimum=a;
            middle=c;
        }
    }
    cout<<"The maximum number is : "<<maximum<<" And the middle one is : "<<middle<<" And the minimum number is :"<<minimum<<endl;

    return 0;
}
