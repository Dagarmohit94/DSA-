#include<iostream>
using namespace std;
int main()
{
    int a=1234;
    int b=98760;

    int temp=a;
    a=b;
    b=temp;
    // cout<<" a is: "<<a<<endl<<" b is : "<<b<<endl;
    int c;
    while(a!=0){
        c=a%10;
        cout<<c;
         a=a/10;
    }
cout<<endl
    while(b!=0){
        c=b%10;
        cout<<c;
         b=b/10;
    }
  return 0;
}