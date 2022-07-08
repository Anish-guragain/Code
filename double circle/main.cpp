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

//	small flower
    float x,y;
    float a=200;
    float b=600;
    float r=70;
    		 glBegin(GL_LINE_LOOP);
    		 glColor3f(250,250,0); 
    		
    		for(float i=0;i<1000;i++){
    			x=a+(r*cos(i));
    			y=b+(r*sin(i));
    			glVertex2i(x,y);
			}
			 glEnd();
	
    float rr=35;
    		 glBegin(GL_LINE_LOOP);
    		 glColor3f(1,0,0); 
    		
    		for(float ii=0;ii<1000;ii++){
    			x=a+(rr*cos(ii));
    			y=b+(rr*sin(ii));
    			glVertex2i(x,y);
			}
			 glEnd();
			 
		glBegin(GL_LINE_LOOP);
		  glVertex2i(200,600);
	      glVertex2i(200,200);
	      glVertex2i(400,200);
		  glVertex2i(400,600);
		glEnd();
	
			
//	Big flower
	float xx,yy;
    float aa=500;
    float bb=600;
    float rrr=140;
    		 glBegin(GL_LINE_LOOP);
    		 glColor3f(250,250,0); 
    		
    		for(float k=0;k<1000;k++){
    			xx=aa+(rrr*cos(k));
    			yy=bb+(rrr*sin(k));
    			glVertex2i(xx,yy);
			}
			 glEnd();
	
    float rrrr=70;
    		 glBegin(GL_LINE_LOOP);
    		 glColor3f(1,0,0); 
    		
    		for(float l=0;l<1000;l++){
    			xx=aa+(rrrr*cos(l));
    			yy=bb+(rrrr*sin(l));
    			glVertex2i(xx,yy);
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
