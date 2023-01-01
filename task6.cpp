#include <iostream>
#include <windows.h>

using namespace std;
 void gotoxy (int x,int y);
 void printA(); 
 void printL();
 void printI();

  main()
{
  system("cls");
  printA();
  printL();
  printI();
}
 


 void gotoxy (int x,int y)
{  
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
} 
void printA()
{
 
 cout<<"    #####   "<<endl;
 cout<<"    #   #   "<<endl;
 cout<<"    #   #   "<<endl;
 cout<<"    #####   "<<endl;
 cout<<"    #   #   "<<endl;
 cout<<"    #   #   "<<endl;
}
void printL()
{
 
 cout<<"    #       "<<endl;
 cout<<"    #       "<<endl;
 cout<<"    #       "<<endl;
 cout<<"    #       "<<endl;
 cout<<"    #       "<<endl;
 cout<<"    #####   "<<endl;
}
void printI() 
{

 
 cout<<"   #####        "<<endl;
 cout<<"     #          "<<endl;
 cout<<"     #          "<<endl;
 cout<<"     #          "<<endl;
 cout<<"     #          "<<endl;
 cout<<"   #####        "<<endl;
}


 
  
