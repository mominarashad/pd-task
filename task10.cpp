#include<iostream>
using namespace std;

void finalprice (string countryname,int ticketprice);
main()
{

string countryname;
int ticketprice;
int totalprice; 

cout<<"enter the country name:";
cin>>countryname;
cout<<"enter the ticket price:";
cin>>ticketprice;

finalprice (countryname,ticketprice);

}
void finalprice (string countryname,int ticketprice)
{ 
int totalprice;
if (countryname=="pakistan")
{ totalprice=0.5*ticketprice;
cout<<"totalprice is"<<totalprice<<endl;}
if (countryname=="ireland")
{ totalprice=0.10*ticketprice;
cout<<"totalprice is"<<totalprice<<endl;}
if (countryname=="india")
{ totalprice=0.20*ticketprice;
cout<<"totalprice is"<<totalprice<<endl;}
if (countryname=="england")
{ totalprice=0.30*ticketprice;
cout<<"totalprice is"<<totalprice<<endl;}
if (countryname=="canada")
{ totalprice=0.30*ticketprice;
cout<<"totalprice is"<<totalprice<<endl;}

}