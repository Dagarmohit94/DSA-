#include <iostream>
using namespace std;
// int main()
// {
    // int num = 5;
    // int *ptr = &num;

    // int *t = &num;

    // cout << (*t)++ << endl;

    // // *t=*t+1;
    // // cout<<*t<<endl;
    // cout << endl;

    // cout << num << endl;
    // int a = *ptr;
    // cout << num << endl;
    // cout << a << endl;
    // a++;
    // cout << a << endl;
    // int *q = ptr;
    // cout << *q << endl;
    // cout << q << endl;
    // cout <<&ptr;
    // return 0;

    //     float f = 10.5;
    // float p = 2.5;
    // float *ptr = &f;

    // // ptr = f
    // cout<<*ptr<<endl;

    // (*ptr)++;
    // // ptr inc by 1
    // cout<<*ptr<<endl;
    // cout<<" value of f: "<<f<<endl;
    // cout<<" value of p: "<<p<<endl;
    // *ptr = p;
    // cout << *ptr <<" " << f << " " << p;

    // ======================= ques 2 =================================

//     int a = 7;
//     int b = 17;
//     int *c = &b;
//     *c = 7;
//     cout << "value of a " << a << endl
//          << "value of b " << b << endl
//          << "value of *c "
//          << *c<< endl ;
// }

// int a=2;
// int b=4;
// int *ptr =&a;
// ptr =b;
// cout<<ptr<<endl;
// cout<<*ptr<<endl;

// int a = 7;
// int *c = &a;
// c = c + 1;
// cout  << a << "  " << *c << endl;
// int a = 7;
// int *c=&a;
// cout<<c<<endl;
// int a[] = {1, 2, 3, 4};
// cout << *(a) << " " << *(a+1);
// c = c + 3;
// cout<< c << endl;

// +++++++++++++++++++++++++++++++++++++  ques  +++++++++++++++++++++++++++++++++++++++++++++++++

// int arr[10]={2,4,6,8,10};

// cout<<" "<<arr<<endl;
// cout<<" "<<&arr[2]<<endl;
// cout<<" "<<*arr+1<<endl;
// cout<<" "<<*(arr+1)<<endl;
// int *p=&arr[4];
// char array[10]={'a', 'b','c'};
// char *c=&array[0];
// cout<<*p<<endl;
// cout<<p<<endl;
// cout<<*(arr+3)<<endl;
// cout<<(arr+3)<<endl;
// cout<<&arr+3<<endl;
// cout<<*p<<endl;

// cout<< sizeof(arr)<<endl;
// cout<< sizeof(arr[4])<<endl;
// cout<< sizeof(*arr)<<endl;
// cout<< sizeof(&arr[4])<<endl;
// cout<< sizeof(p)<<endl;
// cout<< sizeof(*p)<<endl;

/*
cout<< sizeof(*c)<<endl;
cout<< sizeof(c)<<endl;
cout<< sizeof(&c)<<endl;
cout<< sizeof(array)<<endl;
cout<< sizeof(&array)<<endl;
cout<< sizeof(*array)<<endl;
cout<< sizeof(*(array+1))<<endl;
cout<< sizeof((*array+1))<<endl;
*/

// int arr[10]={2,4,6,8,10};
// cout<<arr<<endl;
// cout<<&arr<<endl;
// cout<<&arr[0]<<endl;
// cout<<*arr<<endl;

// int *ptr = &arr[0];
// cout<<&arr<<endl;
// cout<<*(arr+2)<<endl;
// cout<<&ptr<<endl;
// cout<<*ptr<<endl;
// cout<<"1st "<<ptr<<endl;
// cout<<"4th "<< *ptr<<endl;
// *ptr=*ptr+1;
// ptr=ptr+1;
// cout<<"2nd "<<ptr<<endl;
// cout<<"3rd "<< *ptr<<endl;

// char ch[5]="abcde";
// cout<<&ch<<endl;
// cout<<*ch;
// for(int i=0;i<5;i++){
//     cout<<ch[i];
// }

int getsum(int arr[],int n){
        cout<<"size: "<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){   
        sum = sum+arr[i];        
    }
    return sum;
}

int main(){

int arr[5]={1,2,3,4,5};
cout<<getsum(arr,5);

}


