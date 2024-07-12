#include <iostream>
using namespace std;
/*int main()
{

double basic ;
cout<<"enter basic salary: ";
cin>>basic;

char grade;
cout<<"enter grade: ";
cin>>grade;
double allow;
double hra=(20*basic)/100;
double da =(50*basic)/100;
double pf =(11*basic)/100;

if (grade=='A'){
    allow=1700;
}else if(grade=='B'){
    allow=1500;
}else if (grade>='C' && grade<='Z'){
    allow = 1300;
}
int total = basic + hra + da + allow - pf;
cout<<"total salary is : "<<total<<endl;
  return 0;
}*/

// int main() {
//   // Write your code here
//   double basic, allow;
//   char c;
//   cin >> basic >> c;
//   double hra = (20 * basic) / 100;
//   double da = (50 * basic) / 100;
//   double pf = (11 * basic) / 100;
//   int totalSalary;

//   if (c == 'A') {
//     totalSalary = round(basic + hra + da + 1700 - pf);
//   } else if (c == 'B') {
//     totalSalary = round(basic + hra + da + 1500 - pf);
//   } else {
//     totalSalary = round(basic + hra + da + 1300 - pf);
//   }
//   cout << totalSalary << endl;

//   return 0;
// }

// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;

//     // if (c<a> b)
    // {
    //     cout << a;
    // }
    // else if (a<b> c)
    // {
    //     cout << b;
    // }
    // else
    // {
    //     cout << c;
    // }

    // if( a>b && a>c){
    //     cout<<"1st quadrant" <<endl;
    // }





// int getsum(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         if(i%2==0){
//             sum=sum+i;
//         }
//     }
//     return sum;
// }
// int main() {
//     //Write your code here
// int n ;
// cin>>n;
// cout<<"sum of all postives number is: ";
// int ans = getsum(n);
// cout<< ans ;
//     return 0;
// }

// int powerofnum(int n, int p){
//     int power;
//     if(n==0 || p==0){
//     return 1;
//     }

//     if(n>0 && n<=8 && p>0 && p<=9){
//     for(int i=1;i<=p;i++){
//      power=n*i;
//      }
//     }
//     return power;
// }
// int main() {
//     //Write your code here
//     int n,p;
//     cin>>n>>p;
//     int ans =powerofnum(n,p);
//     cout<<ans;
//     return 0;
// }



int factorial(int n){
    int fact=1;
    if(n>=0){
        for(int i=1;i<=n;i++){
            fact= fact*i;
        }
    }else{
        cout<<"Error";
    }
    return fact;
}
int main() {
    //Write your code here
    int n;
    cin>>n;

   int ans= factorial( n);
   cout<<ans;
    return 0;
}