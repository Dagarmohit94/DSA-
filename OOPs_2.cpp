// ============================================ shallow and deep copy (code by  myself) ===========================
#include<iostream>
using namespace std;
// // #include "hero.cpp"

// class hero{
//     public : 
//     int health;
//     char level;
//     string name;

//     void sethealth(int h){
//        health =h;
//     }
//     void setlevel(char c){
//         level=c;
//     }
//     void setstring( string s ){
//         name=s ;
//     }
//     void print (){
//         cout<<"Name is : "<<name<<endl;
//         cout<<"health is : "<<health<<endl;
//         cout<<"level is : "<<level<<endl;

//     }
// };
// int main (){
//     hero ramesh;
//     ramesh.sethealth(99);
//     ramesh.setlevel('S');
//     ramesh.setstring("Mohit");

//     // cout<<"Name is : "<<ramesh.name<<endl<<"health is : "<<ramesh.health <<endl<< "level is : "<<ramesh.level<<endl;
//     hero *suresh = new hero(ramesh);

//     // cout<<"Name is : "<<suresh->name<<endl<<"health is : "<<suresh->health <<endl<< "level is : "<<suresh->level<<endl;
// cout<<"printing for Mohit "<<endl;

// ramesh.print();
// cout<<endl;
// suresh->print();

// ramesh.name[0]='R';
// cout<<endl;

// cout<<"printing for Rohit "<<endl;
// ramesh.print();
// cout<<endl;
// suresh->print();
// }


// ======================================= shallow and deep copy (code by  love babbar)=============================
// class hero {
//     public : 
//     int health;
//     char level;
//     char *name;
//     hero (){
//         // cout<<"constructor here"<<endl;
//         name = new char [10];

//     }
//     void sethealth(int h){
//        health =h;
//     }
//     void setlevel(char c){
//         level=c;
//     }

//     void setname(char name[]){
//         strcpy(this->name,name);
//     }

//     void print (){
//         cout<<"Name is : "<<name<<endl;
//         cout<<"health is : "<<health<<endl;
//         cout<<"level is : "<<level<<endl;

//     }
// };
// int main(){
//     hero ramesh;
//     cout<<"before"<<endl;
//     ramesh.sethealth(10);
//     ramesh.setlevel('C');
//     char name[10]="Mohit";
//     ramesh.setname(name);
//     ramesh.print();
//     cout<<endl;
//     hero *suresh=new hero(ramesh);
//     cout<<endl;
//     suresh->print();
//     cout<<endl;
//     cout<<"after"<<endl;
//     ramesh.name[0]='R';
//     ramesh.print();
//     cout<<endl;
//     suresh->print();
// }

// =================================== copy assingment operator ========================================

class hero {
    public : 
    int health;
    char level;
    char *name;
    hero (){
        // cout<<"constructor here"<<endl;
        name = new char [10];

    }
    void sethealth(int h){
       health =h;
    }
    void setlevel(char c){
        level=c;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }

    void print (){
        cout<<"Name is : "<<name<<endl;
        cout<<"health is : "<<health<<endl;
        cout<<"level is : "<<level<<endl;
    }
};
int main(){
    hero a;
    a.sethealth(10);
    a.setlevel('C');
    a.setname("Mohit");
    a.print();
    hero b;
    a=b;
    cout<<endl;
    b.print();
}