
#include<iostream>
#define n 10
using namespace std;

int sum(int [],int );

int main(){

    int a[n],i;

    for(i=0;i<=n-1;i++)
        cin>>a[i];
        cout<<sum(a,n);
}

int sum(int b[],int m){

    int s=0,i;

    for(i=0;i<=m-1 ;i++)
        s=s+b[i];
        return(s);
}
