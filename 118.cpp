
#include <iostream>
using namespace std;

main(){

    long int s=0,a;

    cout<<"enter your numbers : "<<endl;
    cin>>a;

    while (a!=0){
            s+=a;
            cin>>a;
    }
    cout<<"Sum is "<<s;
}
