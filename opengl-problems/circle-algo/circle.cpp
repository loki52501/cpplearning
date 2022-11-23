#include<iostream>
#include<GL/glut.h>
using namespace std;
void init()
{
	glClearColor(1.0,1.0,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1600,0,800);
}

void setPixel(int x0,int y0,int x,int y){
	glBegin(GL_POINTS);
	glVertex2i(x0+x,y0+y);
	glEnd();
}

void midCircle(int x0,int y0, int radius){
int x=0,y=radius;
int d=1-radius;
while(x<y){
	setPixel(x0,y0,x,y);
	setPixel(x0,y0,x,-y);
	setPixel(x0,y0,-x,y);
	setPixel(x0,y0,-x,-y);
	setPixel(x0,y0,y,x);
	setPixel(x0,y0,-y,x);
	setPixel(x0,y0,y,-x);
	setPixel(x0,y0,-y,-x);
	if(d<0)
		d+=2*x+1;
	else
	{
		d+=2*(x-y)+1;
		y--;
	}
	x++;
}
}

void display(){
	int x,y,radius;
	cout<<"enter x and y coordinates:";
	cin>>x>>y;
	cout<<"/n enter radius:";
	cin>>radius;
	midCircle(x,y,radius);
	glFinish();
}

int main(int argc, char ** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
        glutInitWindowPosition(0,0);
	glutInitWindowSize(1600,850);
	glutCreateWindow("circle");
        init();
	glutDisplayFunc(display);
	glutMainLoop();
}
