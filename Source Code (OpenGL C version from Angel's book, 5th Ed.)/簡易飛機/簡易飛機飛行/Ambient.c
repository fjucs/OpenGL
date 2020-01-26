// Ambient.c
// OpenGL SuperBible, Chapter 6
// Beginning of OpenGL lighting sample
// Demonstrates Ambient Lighting
// Program by Richard S. Wright Jr.

#include <windows.h>
#include <gl/gl.h>
#include <gl/glu.h>
#include <gl/glut.h>
#include <math.h>


// Define a constant for the value of PI
#define GL_PI 3.1415f

// Rotation amounts
static GLfloat xRot = 0.0f;
static GLfloat yRot = 0.0f;
static GLfloat auto_x_Rot = 0.0f;
static GLfloat auto_y_Rot = 0.0f;

static GLfloat Mx = 40.0f;
 static   GLfloat My = 0.0f;
 static   GLfloat Mz = 0.0f;
    
 static   GLfloat Nx = -40.0f;
 static   GLfloat Ny = 0.0f;
 static   GLfloat Nz = 0.0f;
// Called to draw scene
void RenderScene(void)
	{
	// Clear the window with current clearing color
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Save the matrix state
	glPushMatrix();
	glRotatef(xRot, 1.0f, 0.0f, 0.0f); //( GLfloat angle, GLfloat x, GLfloat y, GLfloat z );
	glRotatef(yRot, 0.0f, 1.0f, 0.0f);
	
    glRotatef(auto_x_Rot, 1.0f, 1.0f, 0.0f); //( GLfloat angle, GLfloat x, GLfloat y, GLfloat z );
	glRotatef(auto_y_Rot, 0.0f, 1.0f, 1.0f);




    GLfloat x = 250.0f;
    GLfloat y = -150.0f;
    GLfloat z = 200.0f;
    
    
    GLfloat x1 = -300.0f;
    GLfloat y1 = 0.0f;
    GLfloat z1 = 300.0f;
    
    
    
    
    
    glEnd();
    
    glBegin(GL_TRIANGLES); 
        glColor3ub(255, 0, 0);                        
         // missule
        glVertex3f(0.0f + Mx + x, 0.0f + My + y, 20.0f + Mz + z);   // missule head 
		glVertex3f(-5.0f + Mx + x, 0.0f + My + y, 10.0f + Mz + z);  
		glVertex3f(5.0f + Mx + x,0.0f + My + y,10.0f + Mz + z);
            
		glVertex3f(5.0f + Mx + x,0.0f + My + y,10.0f + Mz + z);  //right
		glVertex3f(0.0f + Mx + x, 5.0f + My + y, 10.0f + Mz + z);
		glVertex3f(0.0f + Mx + x, 0.0f + My + y, 20.0f + Mz + z);

		glVertex3f(0.0f + Mx + x, 0.0f + My + y, 20.0f + Mz + z);
		glVertex3f(0.0f + Mx + x, 5.0f + My + y, 10.0f + Mz + z);
		glVertex3f(-5.0f + Mx + x,0.0f + My + y, 10.0f + Mz + z);
	
	  // missule BODY
	   glColor3ub(255, 255, 255);          
		glVertex3f(-5.0f + Mx + x,0.0f + My + y,10.0f + Mz + z);
		glVertex3f(0.0f + Mx + x, 5.0f + My + y, 10.0f + Mz + z);
		glVertex3f(0.0f + Mx + x, 0.0f + My + y,  -18.0f + Mz + z);

		glVertex3f(0.0f + Mx + x, 0.0f + My + y, -18.0f + Mz + z);
		glVertex3f(0.0f + Mx + x, 5.0f + My + y, 10.0f + Mz + z);
		glVertex3f(5.0f + Mx + x,0.0f + My + y,10.0f + Mz + z);	
	
		glVertex3f(5.0f + Mx + x,0.0f + My + y,10.0f + Mz + z);
		glVertex3f(-5.0f + Mx + x, 0.0f + My + y, 10.0f + Mz + z);
		glVertex3f(0.0f + Mx + x, 0.0f + My + y, -18.0f + Mz + z);

	   // missule of Tail up
	      
        glColor3ub(255, 255, 255);     
		glVertex3f(0.0f + Mx + x,0.16f + My + y,-13.0f + Mz + z);
		glVertex3f(1.0f + Mx + x, 0.16f + My + y, -19.0f + Mz + z);
		glVertex3f(0.0f + Mx + x, 8.0f + My + y, -22.0f + Mz + z);

		glVertex3f(0.0f + Mx + x, 8.0f + My + y, -22.0f + Mz + z);
		glVertex3f(-1.0f + Mx + x, 0.16f + My + y, -19.0f + Mz + z);
		glVertex3f(0.0f + Mx + x,0.16f + My + y,-13.0f + Mz + z);
		
	    //down
	    glVertex3f(0.0f + Mx + x, -0.16f + My + y,-13.0f + Mz + z);
		glVertex3f(1.0f + Mx + x, -0.16f + My + y, -19.0f + Mz + z);
		glVertex3f(0.0f + Mx + x, -8.0f + My + y, -22.0f + Mz + z);

		glVertex3f(0.0f + Mx + x, -8.0f + My + y, -22.0f + Mz + z);
		glVertex3f(-1.0f + Mx + x, -0.16f + My + y, -19.0f + Mz + z);
		glVertex3f(0.0f + Mx + x,  -0.16f + My + y,-13.0f + Mz + z);
		
		
		
		glVertex3f(0.16f + Mx + x, 0.0f + My + y,-13.0f + Mz + z);
		glVertex3f(0.16f + Mx + x, 1.0f + My + y, -19.0f + Mz + z);
		glVertex3f(8.0f + Mx + x, 0.0f + My + y, -22.0f + Mz + z);

		glVertex3f(-0.16f + Mx + x, 0.0f + My + y,-13.0f + Mz + z);
		glVertex3f(-0.16f + Mx + x, 1.0f + My + y, -19.0f + Mz + z);
		glVertex3f(-8.0f + Mx + x, 0.0f + My + y, -22.0f + Mz + z);

		
		
		glVertex3f(0.0f + Mx + x,0.16f + My + y,-13.0f + Mz + z);
		glVertex3f(1.0f + Mx + x, 0.16f + My + y, -19.0f + Mz + z);
		glVertex3f(0.0f + Mx + x, 8.0f + My + y, -22.0f + Mz + z);

		glVertex3f(0.0f + Mx + x, 8.0f + My + y, -22.0f + Mz + z);
		glVertex3f(-1.0f + Mx + x, 0.16f + My + y, -19.0f + Mz + z);
		glVertex3f(0.0f + Mx + x,0.16f + My + y,-13.0f + Mz + z);
		
		glEnd();
		
		glBegin(GL_TRIANGLES); 
                                 
         // missule
         glColor3ub(255, 0, 0);
        glVertex3f(0.0f + Nx + x, 0.0f + Ny + y, 20.0f + Nz + z);   // missule head 
		glVertex3f(-5.0f + Nx + x, 0.0f + Ny + y, 10.0f + Nz + z);  
		glVertex3f(5.0f + Nx + x,0.0f + Ny + y,10.0f + Nz + z);
 
		glVertex3f(5.0f + Nx + x,0.0f + Ny + y,10.0f + Nz + z);  //right
		glVertex3f(0.0f + Nx + x, 5.0f + Ny + y, 10.0f + Nz + z);
		glVertex3f(0.0f + Nx + x, 0.0f + Ny + y, 20.0f + Nz + z);

		glVertex3f(0.0f + Nx + x, 0.0f + Ny + y, 20.0f + Nz + z);
		glVertex3f(0.0f + Nx + x, 5.0f + Ny + y, 10.0f + Nz + z);
		glVertex3f(-5.0f + Nx + x,0.0f + Ny + y, 10.0f + Nz + z);
	
	  // missule BODY
	    glColor3ub(255, 255, 255);          
		glVertex3f(-5.0f + Nx + x,0.0f + Ny + y,10.0f + Nz + z);
		glVertex3f(0.0f + Nx + x, 5.0f + Ny + y, 10.0f + Nz + z);
		glVertex3f(0.0f + Nx + x, 0.0f + Ny + y,  -18.0f + Nz + z);

		glVertex3f(0.0f + Nx + x, 0.0f + Ny + y, -18.0f + Nz + z);
		glVertex3f(0.0f + Nx + x, 5.0f + Ny + y, 10.0f + Nz + z);
		glVertex3f(5.0f + Nx + x,0.0f + Ny + y,10.0f + Nz + z);	
	
		glVertex3f(5.0f + Nx + x,0.0f + Ny + y,10.0f + Nz + z);
		glVertex3f(-5.0f + Nx + x, 0.0f + Ny + y, 10.0f + Nz + z);
		glVertex3f(0.0f + Nx + x, 0.0f + Ny + y, -18.0f + Nz + z);

	   // missule of Tail up
	      
        glColor3ub(255, 255, 255);     
		glVertex3f(0.0f + Nx + x,0.16f + Ny + y,-13.0f + Nz + z);
		glVertex3f(1.0f + Nx + x, 0.16f + Ny + y, -19.0f + Nz + z);
		glVertex3f(0.0f + Nx + x, 8.0f + Ny + y, -22.0f + Nz + z);

		glVertex3f(0.0f + Nx + x, 8.0f + Ny + y, -22.0f + Nz + z);
		glVertex3f(-1.0f + Nx + x, 0.16f + Ny + y, -19.0f + Nz + z);
		glVertex3f(0.0f + Nx + x,0.16f + Ny + y,-13.0f + Nz + z);
		
	    //down
	    glVertex3f(0.0f + Nx + x, -0.16f + Ny + y,-13.0f + Nz + z);
		glVertex3f(1.0f + Nx + x, -0.16f + Ny + y, -19.0f + Nz + z);
		glVertex3f(0.0f + Nx + x, -8.0f + Ny + y, -22.0f + Nz + z);

		glVertex3f(0.0f + Nx + x, -8.0f + Ny + y, -22.0f + Nz + z);
		glVertex3f(-1.0f + Nx + x, -0.16f + Ny + y, -19.0f + Nz + z);
		glVertex3f(0.0f + Nx + x,  -0.16f + Ny + y,-13.0f + Nz + z);
		
		
		
		glVertex3f(0.16f + Nx + x, 0.0f + Ny + y,-13.0f + Nz + z);
		glVertex3f(0.16f + Nx + x, 1.0f + Ny + y, -19.0f + Nz + z);
		glVertex3f(8.0f + Nx + x, 0.0f + Ny + y, -22.0f + Nz + z);

		glVertex3f(-0.16f + Nx + x, 0.0f + Ny + y,-13.0f + Nz + z);
		glVertex3f(-0.16f + Nx + x, 1.0f + Ny + y, -19.0f + Nz + z);
		glVertex3f(-8.0f + Nx + x, 0.0f + Ny + y, -22.0f + Nz + z);

		
		
		glVertex3f(0.0f + Nx + x,0.16f + Ny + y,-13.0f + Nz + z);
		glVertex3f(1.0f + Nx + x, 0.16f + Ny + y, -19.0f + Nz + z);
		glVertex3f(0.0f + Nx + x, 8.0f + Ny + y, -22.0f + Nz + z);

		glVertex3f(0.0f + Nx + x, 8.0f + Ny + y, -22.0f + Nz + z);
		glVertex3f(-1.0f + Nx + x, 0.16f + Ny + y, -19.0f + Nz + z);
		glVertex3f(0.0f + Nx + x,0.16f + Ny + y,-13.0f + Nz + z);
		
		glEnd();
	// Nose Cone /////////////////////////////
	// Bright Green
	glColor3ub(64, 64, 64);
	glBegin(GL_TRIANGLES);//(x,y,z)

        glVertex3f(0.0f + x, 0.0f + y, 60.0f + z);   // plant head 
		glVertex3f(-15.0f + x, 0.0f + y, 30.0f + z);  
		glVertex3f(15.0f + x,0.0f + y,30.0f + z);

		glVertex3f(15.0f + x,0.0f + y,30.0f + z);  //right
		glVertex3f(0.0f + x, 15.0f + y, 30.0f + z);
		glVertex3f(0.0f + x, 0.0f + y, 60.0f + z);

		glVertex3f(0.0f + x, 0.0f + y, 60.0f + z);
		glVertex3f(0.0f + x, 15.0f + y, 30.0f + z);
		glVertex3f(-15.0f + x,0.0f + y,30.0f + z);
     
     
	// Body of the Plane ////////////////////////
	// light gray
		glColor3ub(192,192,192);
		glVertex3f(-15.0f + x,0.0f + y,30.0f + z);
		glVertex3f(0.0f + x, 15.0f + y, 30.0f + z);
		glVertex3f(0.0f + x, 0.0f + y, -56.0f + z);

		glVertex3f(0.0f + x, 0.0f + y, -56.0f + z);
		glVertex3f(0.0f + x, 15.0f + y, 30.0f + z);
		glVertex3f(15.0f + x,0.0f + y,30.0f + z);	
	
		glVertex3f(15.0f + x,0.0f + y,30.0f + z);
		glVertex3f(-15.0f + x, 0.0f + y, 30.0f + z);
		glVertex3f(0.0f + x, 0.0f + y, -56.0f + z);


	///////////////////////////////////////////////
	// Left wing
	// Dark gray
		glColor3ub(64,64,64);
		glVertex3f(0.0f + x,2.0f + y,27.0f + z);
		glVertex3f(-60.0f + x, 2.0f + y, -8.0f + z);
		glVertex3f(60.0f + x, 2.0f + y, -8.0f + z);
	
		glVertex3f(60.0f + x, 2.0f + y, -8.0f + z);
		glVertex3f(0.0f + x, 7.0f + y, -8.0f + z);
		glVertex3f(0.0f + x,2.0f + y,27.0f + z);
	
		glVertex3f(60.0f + x, 2.0f + y, -8.0f + z);
		glVertex3f(-60.0f + x, 2.0f + y, -8.0f + z);
		glVertex3f(0.0f + x,7.0f + y,-8.0f + z);


	// Other wing top section
		glVertex3f(0.0f + x,2.0f + y,27.0f + z);
		glVertex3f(0.0f + x, 7.0f + y, -8.0f + z);
		glVertex3f(-60.0f + x, 2.0f + y, -8.0f + z);

	// Tail section///////////////////////////////
	// Bottom of back fin
	glColor3ub(255,255,0);
		glVertex3f(-30.0f + x, -0.50f + y, -57.0f + z);
		glVertex3f(30.0f + x, -0.50f + y, -57.0f + z);
		glVertex3f(0.0f + x,-0.50f + y,-40.0f + z);

	// top of left side
		glVertex3f(0.0f + x,-0.5f + y,-40.0f + z);
		glVertex3f(30.0f + x, -0.5f + y, -57.0f + z);
		glVertex3f(0.0f + x, 4.0f + y, -57.0f + z);

	// top of right side
		glVertex3f(0.0f + x, 4.0f + y, -57.0f + z);
		glVertex3f(-30.0f + x, -0.5f + y, -57.0f + z);
		glVertex3f(0.0f + x,-0.5f + y,-40.0f + z);

	// back of bottom of tail
		glVertex3f(30.0f + x,-0.5f+ y,-57.0f + z);
		glVertex3f(-30.0f + x, -0.5f+ y, -57.0f + z);
		glVertex3f(0.0f + x, 4.0f+ y, -57.0f + z);


	// Top of Tail section left
	glColor3ub(255,0,0);
		glVertex3f(0.0f + x,0.5f + y,-40.0f + z);
		glVertex3f(3.0f + x, 0.5f + y, -57.0f + z);
		glVertex3f(0.0f + x, 25.0f + y, -65.0f + z);

		glVertex3f(0.0f + x, 25.0f + y, -65.0f + z);
		glVertex3f(-3.0f + x, 0.5f + y, -57.0f + z);
		glVertex3f(0.0f + x,0.5f + y,-40.0f + z);


	// Back of horizontal section
		glVertex3f(3.0f + x,0.5f + y,-57.0f + z);
		glVertex3f(-3.0f + x, 0.5f + y, -57.0f + z);
		glVertex3f(0.0f + x, 25.0f + y, -65.0f + z);
		
		
	
		
		
	glEnd();

	glPopMatrix();

	// Display the results
	glutSwapBuffers();
	}

// This function does any needed initialization on the rendering
// context. 
void SetupRC()
	{
	// Light values
	// Bright white light
	GLfloat ambientLight[] = { 1.0f, 1.0f, 1.0f, 1.0f };

	glEnable(GL_DEPTH_TEST);	// Hidden surface removal
	glEnable(GL_CULL_FACE);		// Do not calculate inside of jet
	glFrontFace(GL_CCW);		// Counter clock-wise polygons face out

	// Lighting stuff
	glEnable(GL_LIGHTING);			// Enable lighting	

	// Set light model to use ambient light specified by ambientLight
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT,ambientLight);


	glEnable(GL_COLOR_MATERIAL);	// Enable Material color tracking

	// Front material ambient and diffuse colors track glColor
	glColorMaterial(GL_FRONT,GL_AMBIENT_AND_DIFFUSE);

	// Nice light blue
	glClearColor(0.0f, 0.0f, 05.f,1.0f);
	}

void motion(int x)
	{
		auto_x_Rot -= 5.0f;
		
        glutPostRedisplay();
        
        glutTimerFunc(33, motion, 0);
    }



void SpecialKeys(int key, int x, int y)
	{
	if(key == GLUT_KEY_UP)
		xRot -= 5.0f;

	if(key == GLUT_KEY_DOWN)
		xRot += 5.0f;

	if(key == GLUT_KEY_LEFT)
		yRot -= 5.0f;

	if(key == GLUT_KEY_RIGHT)
		yRot += 5.0f;

	if(key > 356.0f)
		xRot = 0.0f;

	if(key < -1.0f)
		xRot = 355.0f;

	if(key > 356.0f)
		yRot = 0.0f;

	if(key < -1.0f)
		yRot = 355.0f;
		
   if(key == GLUT_KEY_HOME)
               Mx += 6.0f;
        
    if(key == GLUT_KEY_INSERT)
               Mx = 40.0f;
    
	// Refresh the Window
	glutPostRedisplay();
	}


void ChangeSize(int w, int h)
	{
	GLfloat nRange = 450.0f;
	// Prevent a divide by zero
	if(h == 0)
		h = 1;

	// Set Viewport to window dimensions
    glViewport(-25, 25, w, h);  //  -150 +150

	// Reset coordinate system
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	// Establish clipping volume (left, right, bottom, top, near, far)
    if (w <= h) 
		glOrtho (-nRange, nRange, -nRange*h/w, nRange*h/w, -nRange, nRange);
    else 
		glOrtho (-nRange*w/h, nRange*w/h, -nRange, nRange, -nRange, nRange);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	}

int main(int argc, char* argv[])
	{
	glutInitWindowSize( 1280,960 );
    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("Ambient Light Jet");
	glutReshapeFunc(ChangeSize);
	glutSpecialFunc(SpecialKeys);
	glutDisplayFunc(RenderScene);
   
	glutTimerFunc(33, motion, 0);
	SetupRC();
	glutMainLoop();

	return 0;
	}
