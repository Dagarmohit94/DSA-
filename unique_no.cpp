#include<iostream>
using namespace std;

int unique (int array[], int n){
    int ans=0;
    for(int i=0;i<=n;i++){
        ans=ans^array[i];
    }
    // cout<<" going to main "<<endl;
    return ans;
}
int main()
{
    int arr[6];
    for(int i=0;i<=6;i++){
        cin>>arr[i];
    }
cout<<"unique no is : "<<unique (arr,6);


  return 0;
}