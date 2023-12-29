
#include<iostream>
#include <conio.h>
using namespace std;

int main(){

    int n;
    long int factorial=1;

    cout<<"enter n: ";
    cin>>n;

    for(int i=1; i<=n ; i++)
{
        factorial=factorial*i;
}
    cout<<n<<"!= "<<factorial;

getch();
}
