#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){

    FILE *p;
    char w[10];

    p=fopen("ww.txt","at");
    cout<<ftell(p)<<endl;

    fprintf(p,"not only - but also");
    cout<<ftell(p)<<endl;

    fclose(p);
    p=fopen("ww.txt","r");
    fscanf(p,"%s",w);
    cout<<w<<endl;

    fseek(p,15,SEEK_SET);
    fgets(w,5,p);
    cout<<w;

    fclose(p);
}
