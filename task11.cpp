#include<iostream>
using namespace std;

void speedlimit(int x);
main()
{ 
int x;
cout<<"enter the speed:";
cin>>x;
speedlimit(x);

}
void speedlimit(int x)
{
if(x==105)
cout<<"Halt….YOU WILL BE CHALLENGED!!!";
if(x>100)
cout<<"Perfect! You’re going good.";
}