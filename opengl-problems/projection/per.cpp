#include<iostream>
#include<GL/glut.h>

void init(void){
	glClearColor(1.0,1.0,1.0,0.0);
	glShadeModel(GL_FLAT);
        
}
void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(8.0,4.0,5.0,0.0,0.0,0.0,0.0,1.0,0.0);
//	glScalef(1.0,2.0,1.0);
	glColor3f(1.0,0.0,0.0);
	glutSolidCube(1.0);
	glColor3f(1.0,1.0,1.0);
	glutWireCube(1.0);
	glFlush();
}

void reshape(int w,int h){
	glViewport(0,0,(GLsizei)w,(GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glFrustum(-1.0,1.0,-1.0,1.0,1.5,20.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
int main(int argc,char**argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("perspective");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
