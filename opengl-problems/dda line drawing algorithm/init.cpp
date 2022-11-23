#include<iostream>
#include<GL/glut.h>
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

void windowInit(int argc,char **argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(1600,800);
	glutInitWindowPosition(0,0);
	glutCreateWindow("dda line");
}
