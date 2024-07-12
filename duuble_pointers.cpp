#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    /*cout<<" good yet "<<endl;

    cout<<"1st "<<i<<endl;
    cout<<"2nd "<<&i<<endl;

    cout<<"3rd "<<p<<endl;
    cout<<"adress of p pointer  "<<&p<<endl;
    cout<<"4th "<<*p<<endl;

    cout<<"5th "<<p2<<endl;
    cout<<"6th "<<*p2<<endl;
    cout<<"7th "<<&p2<<endl;
    cout<<"8th "<<**p2<<endl;

*/

    // cout<<" printing i: "<<i<<endl;
    // cout<<" printing i: "<<*p<<endl;
    // cout<<" printing i: "<<**p2<<endl;

    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second << endl;

    return 0;
}