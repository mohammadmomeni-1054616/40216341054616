
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){

    FILE *p,*q,*r;
    int i;

    char a[100],b[50];
    p=fopen("1.txt","rt");
    q=fopen("2.txt","rt");
    r=fopen("3.txt","wt");
    for(i=1;i<=10;i++)
  {
    fgets(a,100,p);
    fgets(b,50,q);
    strcat(a,b);
    strcat(a,"\n");
    fputs(a,r);
  }
    fclose(p);
    fclose(q);
    fclose(r);
}
