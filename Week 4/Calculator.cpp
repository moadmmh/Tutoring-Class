#include<bits/stdc++.h>
using namespace std;


int add(int a,int b){
    return a+b;
}
int mul (int a,int b){
    return a*b;
}
int sub(int a,int b){
    return a-b;
}
void division(int a,int b){
    cout<<"the result is :"<<a/b<<"and the reminder"<<a%b<<endl;
}
int modd(int a,int b){
    return a%b;
}
bool testeven_odd(int var){
    if(var%2==0)
        return true;
    else {
        return false;
    }
}
bool test2(int a,int b){
    if(a%b==0)
        return true;
    else
        return false;
}

int main() {

    
    int a,b;
    string userinput;
    char op;
    cout<<"Welcome to our cool calculator"<<endl;
    cout<<"Do u want to perform 'operation' or 'testing'"<<endl;
    getline(cin,userinput);
    if(userinput=="operation") {
        cout << "Enter the 2 operands" << endl;
        cin >> a >> b;
        cout << "Enter the type of op" << endl;
        cin >> op;
        switch (op) {
            case '+':
                cout << add(a, b) << endl;
                break;
            case '*':
                cout << mul(a, b) << endl;
                break;
            case '/':
                division(a, b);
                break;
            case '-':
                cout << sub(a, b) << endl;
                break;
            case '%':
                cout << modd(a, b) << endl;
                break;
            default:
                cout << "wrong operation" << endl;
        }
    }
    else if(userinput=="testing") {
        cout << "1.Even/odd testing\n2.div specific"<<endl;
        int input2;
        cin>>input2;
        if(input2==1){
            cout<<"Enter the number for odd/even testing"<<endl;
            int x;
            cin>>x;
            if(testeven_odd(x)==true){
                cout<<"the number is even"<<endl;
            }
            else {
                cout<<"The number is odd"<<endl;
            }
        }
        else if(input2==2){
            cout<<"Enter the 2 numbers"<<endl;
            int a,b;
            cin>>a>>b;
            if(test2(a,b)==true){
                cout<<"yes the first id divisible by  the second"<<endl;
            }
            else {
                cout<<"No,it's not"<<endl;
            }
        }
    }
    else{
        cout<<"we don't offer this her!"<<endl;
    }
    return 0;
}
