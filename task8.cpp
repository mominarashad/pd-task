#include<iostream>
#include<windows.h>
using namespace std;

void number(int x,int y);
 
main()
{  
 int x;
 int y;
 while(true)
{ cout<<"enter the number 1:";
 cin>>x;
 cout<<"enter the number 2:";
 cin>>y;
 number(x,y);}
}
void number(int x,int y)
{
   
  if(x==y)
  cout<<"true";
 if(x!=y)
 cout<<"false";
}