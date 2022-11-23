#include<iostream>
#include<GL/glut.h>
using namespace std;
void dda(int x0,int x1, int y0,int y1){
double dx=x1-x0;
double dy=y1-y0;
double m=dy/dx;
int steps;
if(dx>dy)
	steps=dx;
else
	steps=dy;

double  x=x0;
double  y=y0;
for (int k=1;k<=steps;k++){
        putPixel(x,y);
	x+=dx/steps;
	y+=dy/steps;
}

}

void display(){
	int x1,y1,x2,y2;
	cout<<"enter x1 and y1 coordinates:";
	cin>>x1>>y1;
	cout<<"enter x2 and y2 coordinates:";
	cin>>x2>>y2;
	dda(x1,x2,y1,y2);
	glFinish();
}


