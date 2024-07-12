#include <iostream>
using namespace std;

// class employee
// {
// private:
//     int a, b, c;

// public:
//     int d, e;
//     void setdata(int a1, int b1, int c1 );
//     void getdata(){
//         cout<<" value of a is : "<<a<<endl;
//         cout<<" value of b is : "<<b<<endl;
//         cout<<" value of c is : "<<c<<endl;
//         // cout<<" value of d is : "<<d<<endl;
//         // cout<<" value of e is : "<<e<<endl;
//     }
// };
// void employee :: setdata(int a1, int b1 , int c1){
//     a=a1+2;
//     b=b1+3;
//     c=c1+3;
// }
// int main()
// {   int x=2, y=4,z=6;
//     employee mohit ;
//     mohit.setdata(x,y,z);
//     mohit.getdata();

//     return 0;
// }



// ============================================ shop anad item code ============================================

// class shop{

//     int itemid[100];
//     int itemprice[100];
//     int counter ;
    
//     void setdata();
//     void display();

// };
// void shop :: setdata(){
//     cout<<"Enter the itemid : "<<endl;
//     cin>>itemid[counter];
//     cout<<"enter the item price : " <<endl;
//     cin>>itemprice ; 
// }
// void shop :: display(){
// }

// int main(){

// }

// ==============================================================================================================


class hero {
     public:
    int health;
    char level;

    hero() {
    cout<<"constructor called ";
     }
    //  parametric constructor 
    hero (int health, char level){
      this -> health = health ;
      this -> level =level ;
    
        // cout<<" constructor wala " <<health <<endl;
    }


    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    int  sethealth(int h){
        return health;
    }
      void setlevel(char g){
        level=g;
    }

};
int main(){

    hero h(10, 'S');
    hero suresh(h);
    cout<<"suresh health " <<suresh.health<<endl;
    cout<<"suresh level " <<suresh.level<<endl;
     

    // h.level='A';
    // h.setlevel('A');
    // h.sethealth(8300);
   cout<<h.health<<endl;
   cout<<h.level<<endl;
    // hero *b = new hero;

//     b->sethealth(56);
//     b->setlevel('B');
//     // b->level='A';
//       cout<<"health is : "<< (*b).gethealth()<<endl; 
//       cout<<"level is : " <<(*b).level<<endl;

//         cout<<"health is : "<< b->gethealth()<<endl;
//       cout<<"level is : " <<b->level<<endl;
}