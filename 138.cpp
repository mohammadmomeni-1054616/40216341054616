
#include<iostream>
#include<math.h>
#include<conio.h>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y)
{
printf("%c[%d;%df",0x1B,y,x);
}
main(){

    float x,y;

    cin>>x>>y;
    system("cls");

    gotoxy(14,2);
    cout<<sin(sqrt((log(x+y*x*x))/(pow(x,3)+sqrt(x+y*y))));
}
