
#include<iostream>
#include<conio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;

main(){

    int seed;

    seed=time(NULL);
    srand(seed);

    int i=1,x;

    while(i<5){
            x=rand();
    cout<<x<<'\n';
    i++;
}
}
