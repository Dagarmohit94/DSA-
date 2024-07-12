#include <iostream>
using namespace std;

// int binarysearch(int arr[], int n, int key)
// {
//     int start = 0;
//     int end = n - 1;
//     int mid = (start + end) / 2;

//    for(;start<=end;){

//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (key>arr[mid])
//         {
//             start = mid + 1;
//         }
//         else if(arr[mid]>key)

//         {
//             end = mid - 1;
//         }
//         mid = (start + end) / 2;
//     }
//     return -1;
// }
// int main()
// {
//     int odd[7] = {1,4,6,8,9,12,55};
//     int even[6] = {11,22,33,44,55,656};

//     cout << "index for odd is : " << binarysearch(odd, 7, 6) << endl;
//     cout << "index for even is : " << binarysearch(even, 6, 656) << endl;

//     return 0;


// =================== first and last occurrence ===================

// int lastocc(int arr[],int n,int key){
//     int start=0;
//     int end=n-1;
//     int ans =0;

//     int mid=start+(end-start)/2;

//     while(start<=end){
//         if(arr[mid]==key){
//             ans=mid;
//           start=mid+1;
//         }
//         else if (key<arr[mid]){
//             end=mid-1;
//         }
//         else{

//             start=mid+1;
//         }

//         mid=start+(end-start)/2;
//     }
//     return ans ;
// }

// int firstOcc(int arr[],int n,int key){
//     int start=0;
//     int end=n-1;
//     int ans =0;

//     int mid=start+(end-start)/2;

//     while(start<=end){
//         if(arr[mid]==key){
//             ans=mid;
//             end=mid-1;
//         }
//         else if (key<arr[mid]){
//             end=mid-1;
//         }
//         else{

//             start=mid+1;
//         }

//         mid=start+(end-start)/2;
//     }
//     return ans ;
// }

// int main()
// {
//     int arr[11]={1,2,3,3,4,4,4,4,4,4,5};

//     cout<<" first occ is at index : "<<firstOcc(arr,11,4)<<endl;
//     cout<<" last occ is at index : "<<lastocc(arr,11,4);

// }





// ======================= total no of occurrence =================

// int main(){
    // total no of occurence = last occurrence - first occurence 
    // (last and first occurence are evaluted above )
// }


// ======================= peak mountain value=================


// int peak(int arr[], int n){
//      int start=0;
//     int end=n-1;
//     int ans =0;

//     int mid=start+(end-start)/2;

//     while(start<end){
//         if(arr[mid]<arr[mid+1]){
//             start=mid+1;
//         }
//         else{
//             end=mid;
//         }
//          mid=start+(end-start)/2;
//     }
//     return start; 
// }    
// int main(){
//     int arr[5]={1,2,4,3,2};
//     cout<<" peak element is at index : "<<peak(arr,5);
// }
bool elementp(int arr[], int n, int key){
    
}

int main(){
    int arr[5]={7,9,1,2,3};

}
