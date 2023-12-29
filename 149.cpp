
#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int i,j;
    char a[10][20],temp[20];

    for(i=0;i<=9;i++)
        cin>>a[i];

    for(i=0;i<=9;i++)
        for(j=0;j<=9-i;j++)
           if(strcmp(a[i],a[j+1])>0)
        {
             strcpy(temp,a[j]);
             strcpy(a[j],a[j+1]);
             strcpy(a[j+1],temp);
}
    for(i=0;i<=9;i++)
        cout<<a[i]<<endl;
}
