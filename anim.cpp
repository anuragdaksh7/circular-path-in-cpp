#include <iostream>
using namespace std;
#include <stdlib.h>
#include <cmath>
#include <stdio.h>
#ifdef _WIN32
#include <Windows.h>
#include <windows.h>
#else
#include <unistd.h>
#endif
#include <cstdlib>
#include <thread>

int x,y;
int height = 15;
int width = 15;
string s[15];
float theta = 0;
float increament = 0.1;
int rad;
void clearScreen(){
for (int i = 0; i< width; i++){
	for (int j = 0; j< height; j++){
		s[j][i] = " ii"[0];
	}
}
}

void draw(){
	for (int i = 0; i< width; i++){
		for (int j = 0; j< height; j++){
			cout<<s[j][i]<<" ";
		}
		cout<<endl;

	}
}



int main(){
	cout<<"enter radius (between 1 to 7): ";
	cin>>rad;
	//rad = 7;


	clearScreen();
	for (int i = 0; i<100; i++){
		clearScreen();
		system("CLS");
		x = round(sin(theta)*rad + width/2);
		y = round(cos(theta)*rad + height/2);
		s[y][x] = "o "[0];
		draw();
		theta += increament;
		//cout<<"x:"<<x-width/2<<" y:"<<y-height/2<<" angle:"<<theta<<endl;
		//std::this_thread::sleep_for(chrono::milliseconds(200) );
		Sleep(1000/120);
	}
	//cout<<"hmm"<<flush;
	//system("CLS");
	//cout<<"oh";
	return 0;
}