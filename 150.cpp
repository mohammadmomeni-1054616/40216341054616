
#include<iostream>
using namespace std;

int main(){

    int *p,*q;
    p=new int;
    q=new int;

    cin>>*p>>*q;
    cout<<*p+*q;

    delete p,q;
}
