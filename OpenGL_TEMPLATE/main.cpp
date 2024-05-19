#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <stdio.h>
#include <math.h>




void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
    
    glPointSize(30);
    glColor3ub(255,0,0);
    glBegin(GL_POINTS);
    glVertex2i(512,256);
    glEnd();

    
    glFlush();
}



void init(){
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(1024, 512);
    glutCreateWindow("Glut Window");
    glClearColor(0.4,0.4,0.4,0);
    gluOrtho2D(0,1024,512,0);
    
}




int main(int argc, char** argv){	
    glutInit(&argc, argv);
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}