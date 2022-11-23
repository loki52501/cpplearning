#include<math.h>
#include<iostream>
#include<GL/glut.h>

using namespace std;

void delay(unsigned int mseconds){
	clock_t goal=mseconds+clock();
}
void drawSquare(int x,int y,int s){
	double halfside=s/2;
	glColor3d(1.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2d(x+halfside,y+halfside);
	glVertex2d(x+halfside,y-halfside);
	glVertex2d(x-halfside,y-halfside);
	glVertex2d(x-halfside,y+halfside);
	glEnd();
}
void rotateSquare(int px,int py){
	drawSquare(px,py,10);
	glRotatef(30.0,0.0,0.0,1.0);
	drawSquare(px,py,10);
	glFlush();
}

void translateSquare(int px,int py,int tx, int ty){
	int fx=px,fy=py;
	while(1){
		glClear(GL_COLOR_BUFFER_BIT);
		px=px+tx;
		py=py+ty;
		if(px>400|| px<0|| py>400||py<0){
			px=fx;
			py=fy;
		}
		drawSquare(px,py,20);
		glFlush();
		delay(10);}}

		void scaleSquare(int px,int py,int s){
			while(1){
				glClear(GL_COLOR_BUFFER_BIT);
				drawSquare(px,py,20);
				glFlush();
				delay(500);
				drawSquare(px,py,s);
				glFlush();
				delay(500);
			}}
void display(){
	int opt;
	cout<<"enter options \n 1.transalation \n 2.rotation \n 3.scaling";
	cin>>opt;
	switch(opt){
		case 1:
			translateSquare(200,200,1,5);
			break;
		case 2:
			rotateSquare(100,100);
			break;
		case 3:
			scaleSquare(100,100,40);
	}
}
int main(int argc,char**argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(1600,800);
	glutInitWindowPosition(0,0);
	glutCreateWindow("2d transformation");
	glutDisplayFunc(display);
	gluOrtho2D(0.0,1600,0.0,800);
	glutMainLoop();
}
