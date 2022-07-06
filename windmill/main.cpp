#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void init () 
{
    glClearColor (0.0, 0.0, 0.0, 0.0);//select clearing (background) color
    glMatrixMode(GL_PROJECTION);  //initialize viewing values 
    glLoadIdentity(); // to load the program
    gluOrtho2D (0.0, 800.0, 0.0, 1000.0); //glOrtho2D - the display will be in the range of this area
}
void display()
{
	
	// GHAR BANAUNE CORDINATE
    glClear (GL_COLOR_BUFFER_BIT);//clear all pixels
    glColor3f (1.0, 1.0, 0.0);//set color to yellow
    glPointSize(5.0f);//set point size to 10 pixels
    glBegin(GL_LINE_LOOP);
    
      glVertex2i(50,20);
      glVertex2i(120,20);
      glVertex2i(100,120);
	  glVertex2i(70,120);
     
       glEnd();
	
	 glBegin(GL_LINE_LOOP);
    
      glVertex2i(70,120);
      glVertex2i(60,130);
      glVertex2i(20,90);
	  glVertex2i(30,80);
     
       glEnd();
    
     glBegin(GL_LINE_LOOP);
    
      glVertex2i(90,110);
      glVertex2i(130,60);
      glVertex2i(140,70);
	  glVertex2i(100,120);
     
       glEnd();
       
         glBegin(GL_LINE_LOOP);
    
      glVertex2i(70,150);
      glVertex2i(80,160);
      glVertex2i(40,200);
	  glVertex2i(30,190);
     
       glEnd();
    
         glBegin(GL_LINE_LOOP);
    
      glVertex2i(110,140);
      glVertex2i(100,150);
      glVertex2i(140,190);
	  glVertex2i(150,180);
     
       glEnd();
    
    float x,y;
    float a=100;
    float b=100;
    float r=15;
    		 glBegin(GL_POLYGON);
    		
    		for(float i=0;i<1000;i++){
    			x=a+(r*cos(i));
    			y=b+(r*sin(i));
    			glVertex2i(x,y);
			}
			 glEnd();
 
    
    glFlush (); //start processing buffered OpenGL routines
}

//Declare initial window size, position, and display mode (single buffer and RGBA). 
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
//GLUT_SINGLE - This means that the program is automatically drawing straight to the window.
//GLUT_DOUBLE -  giving the program buffer to draw what it has to, then transfer what is actually needed to the screen.
//GLUT_RGB - An alias for GLUT_RGBA.
//GLUT_DEPTH - Bit mask to request a window with a depth buffer.
    glutInitWindowSize (600, 800); 
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Lab 2 – Create Points");
    init ();
    glutDisplayFunc(display); 
    glutMainLoop();
}
