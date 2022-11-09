#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#include <windows.h>


int main () {
  char s[20][20];
  char l = 32;
  for (int i =0; i< 20; i++)
  {
    for (int j = 0; j< 20; j++)
    {
      s[i][j]=l;
    }
  }
  int x,y;
  float theta = 0;
  float rad = 8;
  int lin = 100;
  cout<<endl<<"enter number of loops: ";
  cin>>lin;
  cout<<endl<<"enter radius (1-8): ";
  cin>>rad;
  cout<<endl<<"wanna refresh screen after each loop?(0 for NO, other number for yes) ";
  int per;
  cin>>per;
  for (int z = 0; z<lin; z++){
    x = round(sin(theta)*rad)+10;
    y = round(cos(theta)*rad)+10;
    s[y][x] = 'o';
    
    theta += M_PI/25;
  for (int i =0; i< 20; i++)
  {
    for (int j = 0; j< 20; j++)
    {
      cout<<s[i][j]<<" ";
    }
    cout<<endl;
  }
  if (per != 0){
    s[y][x] = l;
  }
  cout<<x<<" "<<y<<endl;
  if (z<lin-1){
  system("CLS");}
  //Sleep(1000/60);
  }
   

   return 0;
}
