
#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"enter n :";
    cin>>n;
    cout<<"\n";

    int f1=1;
    int f2=1;
    int f3;

    cout<<f1<<" , "<<f2;

    int counter=2;
    while(counter <= n)
  {
      f3 = f2 + f1 ;

      cout<<" , "<<f3;
      f1 = f2;
      f2 = f3;
      counter++;
}
}
