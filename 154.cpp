#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
using namespace std;

int main(){

    int h=0,i,b;

    srand(time(0));

    for(i=1;i<=100;i++)
  {
      b=1+rand()%2;

      if(b==1)
        h++;
}
    cout<<"head="<<h<<endl;
    cout<<"tail="<<100-h;
}
