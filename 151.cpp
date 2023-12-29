
#include<iostream>
using namespace std;

int main(){

    int *p,i,sum=0;

    for(i=1;i<=100;i++)
  {
       p=new(int);
       cin>>*p;
       sum=sum+*p;
       delete (p);
}
    cout<<"sum: "<<sum;
}
