#include<iostream>
using namespace std;
main()
{
int numofholidays;
int workingdays;
int totaltimeforgame;
int difference;
int timeinhours;
int remainingmin;
cout<<"enter holidays:";
cin>>numofholidays;
workingdays=365-numofholidays;
totaltimeforgame=(workingdays*63)+(numofholidays*127);
difference=30000-totaltimeforgame;
timeinhours= difference/60;
remainingmin=difference%60;
cout<<"total difference is"<<difference<<endl;
cout<<"total time in hours is"<<timeinhours<<endl;
cout<<"time in min"<<remainingmin<<endl;
if(totaltimeforgame>30000)
{
cout<<"tom will run away";
}
if(totaltimeforgame<30000)
{
cout<<"tom sleep well";
}
}
 