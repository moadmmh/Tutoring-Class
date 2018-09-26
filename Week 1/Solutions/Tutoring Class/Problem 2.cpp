#include<bits/stdc++.h>
using namespace std;

int main() {


    char c;
    int a,b,res=0;
    cout<<"Please Enter Two numbers"<<endl;
    cin>>a>>b;
    cout<<"Enter the type of operation"<<endl;
    cin>>c;
    if(c=='/' && b==0){
        cout<<"We can't devide by zero !!"<<endl;
    }
    else{
        switch (c){
            case '+': cout<<a+b<<endl;
                      break;
            case '*': cout<<a*b<<endl;
                      break;
            case '/': cout<<a/b<<endl;
                      break;
            case '-': cout<<a-b<<endl;
                      break;
            case '%': cout<<a%b<<endl;
                      break;
            default :
                cout<<"Unknown operation !!"<<endl;
        }
    }
    return 0;
}
