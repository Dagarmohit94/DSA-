#include <iostream>
using namespace std;

// int sum(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     int prevsum = sum(n - 1);
//     return n + prevsum;
// }

// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin >> n;
//     cout<<sum(n);

//     return 0;
// }

// ============================================= ques 2 (reaching home) =========================================
/*void reachhome(int p, int b ){
    cout<<"palwal "<<p<< " badha "<<b<<endl;
    if (p==b){
        cout<<" reached home ";
        return ;
    }
    p++;
    reachhome(p,b);
}
int main(){
    int palwal=0;
    int badha =10;
    reachhome( palwal, badha );
}*/

// +++++++++++++++++++++++++++++++++++ linear search in recursion +++++++++++++++++++++++++++++++++++++++
// bool linearsearch(int arr[], int size, int key){
//     // base condition
//     if (size==0){
//         return false;
//     }
//     if (arr[0]==key ){
//         return true ;
//     }
//     bool remainingpart= linearsearch(arr+1, size-1, key);
//     return remainingpart;
// }

// int main(){
//     int arr[]={3,4,5,6,8,9};
//     int size=6;
//     int key =4;

//     bool ans = linearsearch(arr, size , key );
//     if (ans){
//         cout<<"present ";
//     }else{

//     cout<<"absent ";
//     }
// }

// +++++++++++++++++++++++++++++++ reverse a string using recursion ++++++++++++++++++++++++++++++++++

// void reverse(string& str, int i, int j){
//     // base condition
//     if(i>j){
//         return ;
//     }
//     swap(str[i],str[j]);
//     i++;
//     j--;
//     reverse(str,i,j);

// }
// int main(){
//     string str="Mohit";
//     // int size=s;
//    reverse(str, 0, str.length()-1);
//     cout<<str;
// }

// ++++++++++++++++ palindrome ++++++++++++++++++++++++++

// bool palindrome(string s,int i, int j){
//     // base case
//     if(i>j)
//         return 0;

//     if(s[i]!=s[j]){
//         return 0;}
//         else{
//             palindrome(s,i+1,j-1);
//         }
//     }
// int main(){
//     string s="abhgva";
//     bool ans = palindrome(s,0, s.length()-1);
//     cout<<endl;
//     if(ans ){
//         cout<<" it is palindrome ";

//     }else{
//         cout<<" it is not ";
//     }

// }

// =================================================== BUBBLE SORT ============================================
// void bubblesort(int arr[], int size){
//     //  base case
//     if(size==0 || size == 1 ){
//         return ;
//     }

//     //  recursive call
//     for(int i=0;i<size -1;i++){
//         if(arr[i]>arr[i+1])
//         swap(arr[i], arr[i+1]);
//     }
//     bubblesort(arr,size-1);
// }
// int main(){
//     int arr[7]={4,5,7,6,1,3,2};
//     bubblesort(arr,7);
//     for(int i=0;i<7;i++){
//         cout<<arr[i]<<" ";
//     }

// }

