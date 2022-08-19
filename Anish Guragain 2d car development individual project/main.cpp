#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void init () 
{
    glClearColor (0.0, 0.0, 0.0, 0.0);//select clearing (background) color
    glMatrixMode(GL_PROJECTION);  //initialize viewing values 
    glLoadIdentity(); // to load the program
    gluOrtho2D (0.0, 500.0, 0.0, 500.0); //glOrtho2D - the display will be in the range of this area
}
void display()
{
	
	// GHAR BANAUNE CORDINATE
    glClear (GL_COLOR_BUFFER_BIT);//clear all pixels
    glColor3f (1, 1, 0);//set color to yellow

//	Border of car
    glBegin(GL_LINE_LOOP);
	   
	      glVertex2i(100,100);
	      glVertex2i(100,160);
		  glVertex2i(150,160);
	      glVertex2i(200,200);
		  glVertex2i(400,200);
		  glVertex2i(450,160);
		  glVertex2i(450,100);
	     
	       glEnd();
	       

        glBegin(GL_LINE_LOOP);
        
	    	glVertex2i(200,200);
	      	glVertex2i(200,160);	      
	      	glVertex2i(150,160);
  
       glEnd();
       
      
        glBegin(GL_LINE_LOOP);
        
	    	glVertex2i(400,200);
	      	glVertex2i(400,160);
	      	glVertex2i(450,160);
     
       glEnd();
       
      
        glBegin(GL_LINES);
        
	    	glVertex2i(100,160);
	      	glVertex2i(450,160);
	      	
     
       glEnd();
       
        glBegin(GL_LINES);
        
	    	glVertex2i(300,200);
	      	glVertex2i(300,100);
	      	
     
       glEnd();
       
       
       
//   WHEEL
  	  float x,y;
    float a=200;
    float b=100;
    float aa=380;
    float bb=100;
    float r=30;
    		glBegin(GL_LINE_LOOP);
	    		for(float i=0;i<360;i++){
	    			x=a+(r*cos(i));
	    			y=b+(r*sin(i));
	    			glVertex2i(x,y);
				}
			 glEnd();
	
    float rr=30;
    		glBegin(GL_LINE_LOOP);
	    		for(float ii=0;ii<360;ii++){
	    			x=aa+(rr*cos(ii));
	    			y=bb+(rr*sin(ii));
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
    glutCreateWindow ("Anish Guragain 2D Car Development Individual Project");
    init ();
    glutDisplayFunc(display); 
    glutMainLoop();
}
