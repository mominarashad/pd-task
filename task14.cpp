#include<iostream>
#include<windows.h>
using namespace std;
void printmenu();
void calculateaggregate(string name,float matricmarks,float ecatmarks,float fscmarks);
void compare(string namestd1,float ecatmarksstd1,string namestd2,float ecatmarksstd2);

main()
{
string name;
float matricmarks;
float fscmarks;
float ecatmarks;
string namestd1;
float ecatmarksstd1;
string namestd2;
float ecatmarksstd2;
 printmenu();
cout<< "Enter your name :";
cin>>name;
cout<< "Enter your matricmarks out of 1100:";
cin>> matricmarks;
cout<< "Enter your fscmarks out of 550 :";
cin>>fscmarks;
cout<< "Enter your ecatmarks out of 400:";
cin>>ecatmarks ;
cout<< "Enter  name of std1 :";
cin>>namestd1;
cout<< "Enter  name of std2:";
cin>>namestd2;
cout<< "Enter ecatmarks of std1:";
cin>>ecatmarksstd1 ;
cout<< "Enter ecatmarks of std2:";
cin>>ecatmarksstd2 ;
calculateaggregate(name,matricmarks,ecatmarks,fscmarks);
compare(namestd1, ecatmarksstd1, namestd2,ecatmarksstd2);




}
void printmenu()
{
   cout<< " #######################################     "<<endl;
   cout<< " ##                                   ##     "<<endl;
   cout<< " ##   UNIVERSITY OF ENGINEERING       ##     "<<endl;
   cout<< " ##        AND TECHNOLOGY             ##     "<<endl;
   cout<< " ##                                   ##     "<<endl;
   cout<< " ##                                   ##     "<<endl;
   cout<< " #######################################     "<<endl;
}
void calculateaggregate(string name,float matricmarks,float ecatmarks,float fscmarks)
{
float matricaggregate;
float fscaggregate;
float ecataggregate;
float totalaggregate;
matricaggregate=((matricmarks/1100)*100*0.30);
fscaggregate=((fscmarks/550)*100*0.30);
ecataggregate=((ecatmarks/400)*100*0.40);
totalaggregate=matricaggregate+fscaggregate+ecataggregate;
cout<<"the total aggregate is"<<totalaggregate<<endl;
}
void compare(string namestd1,float ecatmarksstd1,string namestd2,float ecatmarksstd2)
{


if(ecatmarksstd1>ecatmarksstd2)
{cout<<"  student 1 "<<endl;}
if(ecatmarksstd2>ecatmarksstd1)
{cout<<" student 2 "<<endl;}
}