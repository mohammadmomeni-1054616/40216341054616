
#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    int age;
    int n;

    cout<<"enter the number of family: ";
    cin>>n;

    int sum=0;
    float ave;
    char ch;

    for(int i=1;i<=n;i++)
  {
      do{
            cout<<"please enter age:";
            cin>>age;
}
    while(age<0);
        sum=sum+age;
}
    ave=sum/n;
    cout<<"\n the average is:"<<ave;

getch();
}
