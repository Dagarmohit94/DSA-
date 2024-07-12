#include <iostream>
using namespace std;

void selection(int arr[], int n)
{
    cout << " running code ... " << endl;
    int minindex;
    for (int i = 0; i < n; i++)
    {
        minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[minindex], arr[i]);
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
    // selection sort

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
    selection(arr, size);
    print(arr, size);
    // return 0;
}