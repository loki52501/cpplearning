#include<iostream>
#include<GL/glut.h>
using namespace std;
void init(){
	glClearColor(1.0,1.0,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1600,0,900);
}

void putPixel(int x, int y){
	glBegin(GL_POINTS);
	glVertex2f(double(x),double(y));
	glEnd();
}

void bresen(int x0,int x1, int y0,int y1){
double dx=x1-x0;
double dy=y1-y0;
double m=dy/dx;
int pk=2*dy-dx;
for (int k=0;k<dx-1;++k){
       	putPixel(x0,y0);
	pk=(pk<0)?(pk+2*dy):((pk+2*dy-2*dx)&&y0++);
	x0++;
}
glFinish();

}

void windowInit(int argc,char **argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(1600,800);
	glutInitWindowPosition(0,0);
	glutCreateWindow("dda line");
}

void display(){
	int x1,y1,x2,y2;
	cout<<"enter x1 and y1 coordinates:";
	cin>>x1>>y1;
	cout<<"enter x2 and y2 coordinates:";
	cin>>x2>>y2;
	bresen(x1,x2,y1,y2);
	glFinish();
}

int main(int argc,char**argv){
	windowInit(argc,argv);
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}


