#include <iostream>
using namespace std;
// int main()
// {
//     int i=5;
//     int &j=i;

//     int *p=&j;
//     cout<<i<<endl;
//     cout<<&i<<endl;
//     cout<<j<<endl;
//     cout<<&j<<endl;
// cout<<endl<<endl;

// cout<<*p<<endl;
// cout<<p<<endl;
// cout<<&p<<endl;
// cout<<*j<<endl;
void print(int *arr, int n)
{
  for (int i = 0;i < n; i++)
  {
    cout << arr[i]<<" ";
  }
  cout << endl;
}
int main()
{
  int n;
  cout << "Ente the size of array: ";
  cin >> n;

  int *arr = new int[n];

  cout << "Enter elements of array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  print(arr, n);
}
