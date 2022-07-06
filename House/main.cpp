#include <windows.h>
#include <GL/glut.h>

void init () 
{
    glClearColor (0.0, 0.0, 0.0, 0.0);//select clearing (background) color
    glMatrixMode(GL_PROJECTION);  //initialize viewing values 
    glLoadIdentity(); // to load the program
    gluOrtho2D (0.0, 600.0, 0.0, 800.0); //glOrtho2D - the display will be in the range of this area
}
void display()
{
	
	// GHAR BANAUNE CORDINATE
    glClear (GL_COLOR_BUFFER_BIT);//clear all pixels
    glColor3f (1.0, 1.0, 0.0);//set color to yellow
    glPointSize(5.0f);//set point size to 10 pixels
    glBegin(GL_LINE_LOOP);
    
      glVertex2i(20,150);
      glVertex2i(270,150);
      glVertex2i(270,30);
	  glVertex2i(20,30);
     
       glEnd();
	    
    glBegin(GL_LINE_LOOP);
      glVertex2i(20,150);
      glVertex2i(270,150);
      glVertex2i(470,300);
	  glVertex2i(175,300);
     

	glEnd();
 
	glBegin(GL_LINE_LOOP);
      
      glVertex2i(270,150);
      glVertex2i(470,300);
	  glVertex2i(470,50);
	  glVertex2i(270,30);
      
    glEnd();
    
      glBegin(GL_LINE_LOOP);
      glVertex2i(100,100); 
      glVertex2i(170,100);
      glVertex2i(170,30);
      glVertex2i(100,30);
      
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
