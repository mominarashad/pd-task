#include <iostream>
#include <windows.h>
#include <unistd.h>

using namespace std;
void gotoxy(int x,int y);
void printmaze();
void playermove(int x,int y);
 
 main()
{
  system("cls");
  printmaze();
  int x=10;
  int y=10;
  while(true)

{ 
  playermove(x,y);
  if(y<21)
  {y=y+1;}

  if(y==21)
  {gotoxy(x,y-1);
  cout<<" ";
  y=1;}
}
}
void printmaze()
{
cout<< " #############################################################################  "<<endl;
cout<< " #...........................................................         .....  #  "<<endl; 
cout<< " #..  %%%%%%%%%%%%%%      ...      %%%%%%%%%%%%%        |%|..         %%%%   #  "<<endl;                                                             
cout<< " #..      |%|    |%|   |%|...      |%|       |%|        |%|..         |%|    #  "<<endl;
cout<< " #..      |%|    |%|   |%|...      |%|       |%|        |%|..         |%|    #  "<<endl; 
cout<< " #..      %%%%%%%%%%.. |%|...      %%%%%%%%%%%%%     |%|   ..         %%%%.  #  "<<endl;                                    
cout<< " #..      |%|       .. |%|...      .............     |%|   ..             .  #  "<<endl;
cout<< " #..      %%%%%%%%%%.. |%|...      %%%%%%%%%%%       |%|   ..         %%%%.  #  "<<endl;
cout<< " #..               |%|.            |%|......               ..          |%|.  #  "<<endl;                               
cout<< " #..|%|  ......... |%|.            |%|......|%|            ..          |%|.  #  "<<endl;
cout<< " #..|%|  |%|%%%|%|.|%|.   |%|         ......|%|             .|%|       |%|.  #  "<<endl;
cout<< " #..|%|  |%|   |%|..       %%%%%%%%%%  .....|%|            ..|%|.            #  "<<endl;
cout<< " #..|%|  |%|   |%|..            ...|%|     %%%%            ..|%|.            #  "<<endl;
cout<< " #..|%|               .         ...|%|                 |%| ..|%|.            #  "<<endl;
cout<< " #..|%|   %%%%%%%%%%%%          ...|%|%%%%%%%%%%%%%    |%| ..|%|%%%%%%%%%%   #  "<<endl;
cout<< " #.................................................    |%| .............     #  "<<endl;
cout<< " #.................................................             ........     #  "<<endl;
cout<< " #..|%|    |%|    |%|..     %%%%%%%%%%%   ........|%|  |%|  ..|%|.           #  "<<endl;
cout<< " #..|%|    |%|    |%|..          ...|%|        %%%%%%  |%|  ..|%|.           #  "<<endl;
cout<< " #..|%|              .           ...|%|                |%|  ..|%|.           #  "<<endl;
cout<< " #..|%|    %%%%%%%%%%%%%%%%      ...|%|%%%%%%%%%%      |%|  ..|%|%%%%%%%%%%  #  "<<endl;
cout<< " #..................................................   |%|  ..............   #  "<<endl;
cout<< " #..................................................        ............     #  "<<endl;
cout<< " #############################################################################  "<<endl;
 }
void playermove(int x,int y)
{
 gotoxy(x,y-1);
 cout<<" ";
 gotoxy(x,y);
 cout<<"P";
 Sleep(500);
}
void gotoxy (int x,int y)
{  
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
} 