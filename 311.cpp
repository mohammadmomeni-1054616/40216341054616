
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int a;
    int a1,a2;
    double result;
    char operand;
    char ch;
    cout<<"Enter the numbers: ";
    cin>>a1>>a2;
    cout<<"Enter operand: ";
    operand=getch();
    putch(operand);
    cout<<"\n";
    switch(operand)
  {
      case'+':
          result=a1+a2;
          cout<<"a1+a2= "<<result;
          break;
      case'-':
          result=a1-a2;
          cout<<"a1-a2= "<<result;
          break;
      case'*':
          result=a1*a2;
          cout<<"a1*a2= "<<result;
      case'/':

          if(a2==0)
   {
            cout<<" it's not possible";
            break;
}
          else
   {
            result=a1/a2;
            cout<<"a1/a2= "<<result;
            break;
}
      default:
          cout<<"invalid operator!!!!!!!!!";
}
getch();
}
