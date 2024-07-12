#include <iostream>
using namespace std;
// int getmax(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout<<"array is "<<arr[i];

//     }
//     return ;
// }

// int add(int num1, int num2){
//     int sum=num1+num2;
//     // cout<<sum;
//     return sum;
//
// int main()
// {
//     int size;
//     cout<<"Enter the size of array : "<<endl;
//     cin>>size;

//     int array[100];
//     cout<<"Enter elements of Array : "<<endl;
//     for(int i=0;i<=size;i++){
//         cin>>array[i];
//     }
//     getmax(array, size);

// int a;
// int b;
// cin>>a>>b;
// for(int i=0;i<=a;i++){
//     if(i<a && i>9){
//         cout<<
//     }
// }

// }

// int n;
// cin >> n;
// string numbers[9]={"one","two","three","four","five","six","seven","eight","nine"};

// if(n<=9){
//    cout<<numbers[n-1]<<endl;
// }else{
//     cout<<"greater than 9 ";
// }

int getmax(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i <=n ; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    return maxi;

}
int main()
{
    int arr[4];
    for (int i = 0; i <= 4; i++)
    {
        cin >> arr[i];
    }
    cout << getmax(arr, 4) << endl;
}
