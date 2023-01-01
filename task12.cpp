#include<iostream>
#include<windows.h>
using namespace std;
void originalprice(int redroses,int whiteroses,int tulip ) ;

void totalpayableamount(int discountprice);
main()
{ 
int redroses;
int whiteroses;
int tulip;
int totalprice; 
int discountprice;
cout<<"the number of red roses is:";
cin>>redroses;
cout<<"the number of white roses is:"<<endl;
cin>>whiteroses;
cout<<"the number of tulip is:"<<endl;
cin>>tulip;
originalprice( redroses, whiteroses, tulip );
totalpayableamount( discountprice);


}
void originalprice(int redroses,int whiteroses,int tulip )
{
int totalprice; 
{totalprice=2*redroses+4.10*whiteroses+2.5*tulip;}
{cout<<"the total price is "<<totalprice<<endl;}
}
void totalpayableamount(int discountprice)
{
int totalprice; 

if(totalprice>200)
{int discountprice;
discountprice=0.20*totalprice;
cout<<"the discount price is "<<discountprice<<endl;

}

}