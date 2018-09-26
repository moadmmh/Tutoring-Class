#include<bits/stdc++.h>
using namespace std;

int main() {

    
    char c;
    cout<<"Please Enter your character"<<endl;
    cin>>c;
    if(c>='A' && c<='Z'){
        if(c=='A' || c=='E' || c=='U' || c=='I' || c=='O')
            cout<<"Upper case and Vowel"<<endl;
        else
            cout<<"Upper case and Consonant"<<endl;
    }
    else if(c>='a' && c<='z'){
        if(c=='a' || c=='e' || c=='u' || c=='i' || c=='o')
            cout<<"Lower case and Vowel"<<endl;
        else
            cout<<"Lower case and Consonant"<<endl;
    }
    else if(c>='0' && c<='9'){
        cout<<"Digit"<<endl;
    }
    else {
        cout<<"Unknown character"<<endl;
    }
    return 0;
}
