#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;
int main()
{
 vector <int > v;
 vector <char > c;

 v.push_back(1);    
 v.push_back(2);
 v.push_back(3);    
 v.push_back(4);    
 v.push_back(5);
 v.push_back(6);
 c.push_back('a');
 c.push_back('b');
 c.push_back('x');

//  cout<<" finding element -> "<<binary_search(v.begin(),v.end(),6);
for(int i=0;i<sizeof(c);i++){
  cout<<c[i]<<" ";
}

  return 0;
}