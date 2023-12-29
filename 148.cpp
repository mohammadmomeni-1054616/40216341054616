
#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int i;
    char x[20],a[10][20];

    for(i=0;i<10;i++)
        cin>>a[i];

    cout<<"enter x:";
    cin>>x;

    for(i=0;i<10;i++)
        if(strcmp(a[i],x)==0)
    {
        cout<<"found";
        break;
    }
}
