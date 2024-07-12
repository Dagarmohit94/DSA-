#include <iostream>
#include <vector>

using namespace std;

// bool linearsearch(int arr[][4], int k, int n, int m)
// {
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             if (arr[row][col] == k)
//             {
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }
// int linearsearch(int arr[][4], int k, int n, int m)
// {
//     int index=-1;
//     for (int row = 1; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             if (arr[row][col] == k)
//             {
//             index=arr[row][col];
//             }
//         }
// }

//         return index;
// }

// int main()
// {
//     int arr[3][4];
//     cout << "Enter ELements : ";
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             cin >> arr[row][col];
//         }
//     }

//     cout << endl;
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             cout << arr[row][col] << " ";
//         }
//         cout << endl;
//     }
//     int key;
//     cout << "Enter key to search : ";
//     cin >> key;

//     int value = linearsearch(arr, key, 3, 4);
//     // if (value == true)
//     // {
//     //     cout << " found ";
//     // }
//     // else
//     // {
//     //     cout << "not found";
//     // }
//     // return 0;
//     cout << "index is " <<value;
// }

// ==================================== find sum row wise ============================

// void sumrow(int arr[][4],int n, int m){
//     int sum=0;
//       for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//            sum=sum+arr[row][col];

//         }
//         cout<<"Sum of "<< row <<"th row is : "<<sum<<endl;
//         sum=0;
//     }
// }

// int main()
// {
//     int arr[3][4];
//     // taking input
//     cout << "Enter ELements : ";
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             cin >> arr[row][col];
//         }
//     }

// // printing the array
//     cout << endl;
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             cout << arr[row][col] << " ";
//         }
//         cout << endl;
//     }
//  sumrow(arr,3,4);
// }

// ==================================== find sum col wise ============================

// void sumcol(int arr[][3],int n, int m){
//     int sum=0;
//       for (int col = 0; col < 3; col++)
//     {
//         for (int row= 0; row < 3; row++)
//         {
//            sum=sum+arr[row][col];

//         }
//         cout<<"Sum of "<< col <<"th col is : "<<sum<<endl;
//         sum=0;
//     }
// }

// int main()
// {
//     int arr[3][3];
//     // taking input
//     cout << "Enter ELements : ";
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 3; col++)
//         {
//             cin >> arr[row][col];
//         }
//     }

// // printing the array
//     cout << endl;
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 3; col++)
//         {
//             cout << arr[row][col] << " ";
//         }
//         cout << endl;
//     }
//  sumcol(arr,3,3);
// }

// ======================================== largest row in array ===================================

// int largestrow(int arr[][4],int n, int m){
//     int mixi=INT_MIN;
//      for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//          if(sum>mixi)

//         }

//         }
//     }

// void sumrow(int arr[][4], int n, int m)
// {
//     int sum = 0;
//     int max = INT_MIN;int index;
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             sum = sum + arr[row][col];
//         }
//         cout << "Sum of " << row << "th row is : " << sum << endl;
//         if (sum > max)
//         {
//             max = sum;
//             index=row;
//         }
//         sum = 0;
//     }
//     cout << "mamimum no is " << max<<" index is row "<<index;
// }
// int main()
// {
//     int arr[3][4];
//     // taking input
//     cout << "Enter ELements : ";
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             cin >> arr[row][col];
//         }
//     }

//     // printing the array
//     cout << endl;
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             cout << arr[row][col] << " ";
//         }
//         cout << endl;
//     }
//     sumrow(arr, 3, 4);
// }



// ======================================== wave print in col =======================================


//     int main()
// {
//     int arr[3][4];
//     // taking input
//     cout << "Enter ELements : ";
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             cin >> arr[row][col];
//         }
//     }

//     // printing the array
//     cout << endl;
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             cout << arr[row][col] << " ";
//         }
//         cout << endl;
//     }
//     sumrow(arr, 3, 4);
// }


// ==================================== sum of upper and lower tringle =======================================

int main(){
    int sum=0;
 int arr[3][3]={3,4,6,2,45,6,32,13,54};
cout<<"Array is : ";
 for(int i=0;i<3;i++){
    cout<<endl;
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
 }cout<<endl;

 for( int i=3-1;i>=0;i--){
    for(int j=i;j>=0;j--){
      sum= arr[i][j]+sum;
    }
 }
 cout<<"sum is :" <<sum;
}