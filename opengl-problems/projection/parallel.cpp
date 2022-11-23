#include<iostream>
#include<GL/glut.h>
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_PROJECTION);
glutSolidTeapot(.5);
glFlush();
}

void reshape(int w,int h)
{
glViewport(0,0,w,h);
}

int main(int argc,char *argv[])
{
glutInit(&argc,argv);
glutInitWindowSize(500,500);
glutInitWindowPosition(0,0);
glutInitDisplayMode(GLUT_RGB);
glutCreateWindow("hello,teapot!");
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-2.0,2.0,-2.0,2.0,-2.0,2.0);
glutMainLoop();
return 0;
}

