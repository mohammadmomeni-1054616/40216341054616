
#include<iostream>
using namespace std;

int main(){

    float grade;
    float sum=0;
    float average;
    char finish='0';
    int counter=0;

    cout << " enter number : ";
    cin >> grade;

    while(grade != -1)
    {
        sum = sum + grade ;
        counter++;

        cout << " enter number : ";
        cin >> grade;
}
       average = sum / counter;
       cout<<"average is : "<<average;
}
