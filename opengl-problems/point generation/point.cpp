#include<GL/glut.h>

void init(){
	glClearColor(1.0,1.0,1.0,0.0f);
        glClear(GL_COLOR_BUFFER_BIT);
       glColor3f(0.0f,1.0f,0.0f);
       glPointSize(10.0);
       glMatrixMode(GL_PROJECTION);
       glLoadIdentity();
       gluOrtho2D(0.0,1600.0,0.0,865.0);
}
void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glVertex2f(400.0,400.0);
	glEnd();
	glFlush();
}

int main(int argc, char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
        glutInitWindowSize(1600,865);
	glutInitWindowPosition(0,0);
	glutCreateWindow("points");
	glutDisplayFunc(display);
	init();
	glutMainLoop();
	return 0;
}


