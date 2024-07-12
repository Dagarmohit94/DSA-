#include<iostream>
using namespace std;

void insertion(int arr[], int  n ){
    for(int i=1;i<n;i++){
        int j=i-1;
        int current = arr[i];
        while (arr[j]>current ){
            swap(srr[])
        }
    }
}
int main()
{
      int size;
    cout << " enter size : ";
    cin >> size;

    int arr[size];

    cout << "Enter the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << " calling fuction ..." << endl;   
         insertion(arr,size);
         for (int i = 0; i < size; i++)
    {
        cout <<arr[i];
    }


  return 0;
}