#include <iostream>
#include <vector>
using namespace std;

// ============================= reverse an vector =================================

// 1.
// vector<int> reverse(vector<int> v)
// {
//   int s = 0;
//   int e = v.size()-1;
//   while (s <= e)
//   {
//     swap(v[s], v[e]);
//     s++;
//     e--;1
//   }
//     return v;
// }
// void dispaly(vector<int> &v)
// {
//   for (int i=0; i <v.size(); i++)
//   {
//     cout << v [i] << " ";
//   }
// }

// int main()
// {
//   vector<int> v;
//   v.push_back(1);
//   v.push_back(2);
//   v.push_back(3);
//   v.push_back(4);
//   v.push_back(5);
//   v.push_back(6);

//   cout << " original vector is ";
//   for (int i = 0; i < 6; i++)
//   {
//     cout << v[i] << " "  ;
//   }
//   cout <<endl<< " reverse vector is ";
//  vector<int > ans = reverse(v);
//   dispaly(ans);
//   return 0;
// }

// 2.
// void reverse(int arr[], int n){

//     reverse(arr,arr+n);
// }
// void print(int arr[], int n){
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
// reverse(arr,5);
// print(arr,5);
// }
// ================================== merge two arrays in one ============================

// void merge(int arr1[], int n, int arr2[], int m, int arr3[])
// {
//   int i = 0, j = 0;
//   int k = 0;
//   while (i < n && j < m)
//   {
//     if (arr1[i] < arr2[j])
//     {
//       arr3[k] = arr1[i];
//       k++;
//       i++;
//     }
//     else
//     {
//       arr3[k] = arr2[j];
//       j++;
//       k++;
//     }
//   }
//   while (i < n)
//   {
//     arr3[k] = arr1[i];
//     k++;
//     i++;
//   }
//   while (j < m)
//   {
//     arr3[k] = arr2[j];
//     k++;
//     j++;

//   }
//   // return 0;
// }

// void print(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//     {
//       cout << arr[i] << " ";
//     }
//   }
//   int main()
//   {
//     int arr1[5] = {10, 30, 50, 70, 90};
//     int arr2[5] = {20, 40, 60, 80, 100};

//     int arr3[10] = {0};

//     merge(arr1, 5, arr2, 5, arr3);
//     print(arr3, 10);
//     return 0;
//   }

// void merge(int arr1[], int arr2[], int n, int m)
// {
//   int i = n - 1;
//   int j = m - 1;
//   int k = m + n - 1;

//   while (i >= 0 && j >= 0)
//   {
//     if (arr1[i] < arr2[j])
//     {
//       arr1[k--] = arr2[j--];

//     }
//     else
//     {
//       arr1[k--] = arr1[i--];
//     }
//   }
//   while (i >= 0)
//   {
//     arr1[k--] = arr1[i--];
//   }
//   while (i >= 0)
//   {
//     arr1[k--] = arr2[j--];
//   }
// }

// void print(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }
// }

// int main()
// {
//   int num1[3] = {1, 2, 3};
//   int num2[3] = {4, 5, 6};
//   print(num1, 3);
//   merge(num1, num2, 3, 3);
//   print(num1, 6);
// }

// ==================================== Move zeros =====================================
// void move(int arr[], int n)
// {
//   int i = 0;
//   // int j = 0;
//   for (int j = 0; j < n; j++)
//   {
//     if (arr[j] != 0)
//     {

//       swap(arr[j], arr[i]);
//       i++;
//     }
//   }
// }

// void print(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }
// }
// int main()
// {
//   int arr[7] = {2, 0, 1, 3, 0, 4, 0};
//   move(arr, 7);
//   print(arr, 7);
// }

// ================================= Rotate an array ==================================

// void print(vector<int> v){

// for (int i=0; i <v.size(); i++)
//   {
//     cout << v[i]<<" ";
//   }

// }
// int rotatearr(vector<int> v(n)){
//     for(int i=0;i<n;i++){
//         temp[(i+k)%n]=
//     }
// }

// int main(){

// vector<int> v(4);
// int n=v.size();
// cout<<"Enter vector : ";
// for (int i=0; i <v.size(); i++)
//   {
//     cin >> v[i];
//   }

// print(v);

// }

// ============================================ get the sum of array (using loop) =================================
/*
int getsum(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int arr[5]={3,2,5,1,6};

    int total = getsum(arr,5);
    cout<<"sum is : "<<total;
}
*/

//  =========================================== get the sum of array (using recursion) =================================


// first approach 

// int getsum(int arr[], int n){
//     int sum=0;
//     if (n==0){
//         return 0;
//     }
//      sum = arr[n-1]+ getsum(arr, n-1);
//      return sum;
// }
// int main(){

//     int arr[5]={1,2,3,4,5};

//     int total = getsum(arr,5);
//     cout<<total;
// }
// second approach 

// int getsum(int arr[], int size){
//     // base case 
//     if (size==0){
//         return 0;
//     }
//     else if (size==1){
//         return arr[0];
//         }
//     // int remaning = getsum(arr+1,size-1);
//     int sum =arr[0]+  getsum(arr+1,size-1);
//     return sum;

// }

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 7};
//     int size = 5;

//     int total = getsum(arr, size);

//     cout << total;
// }




