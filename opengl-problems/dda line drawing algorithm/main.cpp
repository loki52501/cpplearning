#include<iostream>
#include<GL/glut.h>
using namespace std;

int main(int argc,char**argv){
	windowInit(argc,argv);
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
