#include <iostream>
using namespace std;

void bubble(int arr[], int n)
{   bool swapped=false;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped=true;
            }
    }if(swapped==false){
        cout<<" already sorted ";
        break;
    }
        }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int size;
    cout << " enter size : ";
    cin >> size;

    int arr[size];
  
 cout<<"enter the array ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << " calling fuction ..." << endl;
    bubble(arr, size);
    print(arr, size);

    return 0;
}