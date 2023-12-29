#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
using namespace std;

int main(){

    srand(time(0));
    getch();
    cout<<1+rand()%6;
}
