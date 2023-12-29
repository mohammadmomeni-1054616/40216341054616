
#include<iostream>
#define n 28
using namespace std;

struct student
{
    char name[15];
    char family[20];
    int sex;
    float Avg;
}
a[n],temp;
int main(){

    int i,j;

    for(i=0;i<=n-1;i++)
  {
    cin>>a[i].name;
    cin>>a[i].family;
    cin>>a[i].sex;
    cin>>a[i].Avg;
  }

  for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
      if(a[i].Avg>a[j].Avg)
  {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
}
    cout<<"name\tfamily\tsex\tAvg\n";

    for(i=0;i<=n-1;i++)
{
         cout<<a[i].name<<"\t"<<a[i].family<<"\t"<<a[i].sex<<"\t"<<a[i].Avg<<endl;
}
}
