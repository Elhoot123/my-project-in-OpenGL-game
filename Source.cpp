#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
#include<windows.h>
#include<gl/glu.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <sstream>
#include<stdio.h>
#include<GL/freeglut.h>
#include<math.h>
#include <irrKlang.h>
using namespace irrklang;

GLfloat angle = 0.0f;  // rotational angle of the shapes
GLfloat deltax = 0.001;
GLfloat x = 0.0;
void drawText(const char* ch, int xpos, int ypos)//draw the text for score and game over
{
    int numofchar = strlen(ch);
    glLoadIdentity();
    glColor3f(1.0, 0.0, 0.0);
    glRasterPos2f(xpos, ypos);
    for (int i = 0; i <= numofchar - 1; i++)
    {

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, ch[i]);//font used here, may use other font also
    }
}
void star() {
     

    glMatrixMode(GL_MODELVIEW);     // To operate on Model-View matrix
    glLoadIdentity();               // Reset the model-view matrix
    glPushMatrix();                     // Save model-view matrix setting
    glTranslatef(x, 0.0f, 0.0f);    // Translate
    glScalef(0.1, 0.1, 0.1);
    glRotatef(angle, 0.0f, 0.0f, 1.0f); // rotate by angle in degrees
    glBegin(GL_LINE_LOOP);
    glColor3f(0.4, 0.9, 0.9);
    glVertex2f(0.5 , 1.5 );
    glVertex2f(1 , 0.5 );
    glVertex2f(2.1820857913818 , -0.2454517269911 );
    glVertex2f(1.169145104234 , -0.1195833575822 );
    glVertex2f(1.5 , -1.5 );
    glVertex2f(0.5 , -0.5 );
    glVertex2f(-0.5 , -1.5 );
    glVertex2f(-0.1734508361275, -0.1016021619524 );
    glVertex2f(-1.1624165957688 , -0.0656397706927 );
    glVertex2f(0 , 0.5 );
    glEnd();
    glPopMatrix();                      // Restore the model-view matrix
    glutSwapBuffers();   // Double buffered - swap the front and back buffers
    if (x >= 1)
        x = -1;
    // Change the rotational angle after each display()
    x += deltax;
    angle += 0.5f;
    glFlush();
    glutPostRedisplay();

}
void star2() {


    glMatrixMode(GL_MODELVIEW);     // To operate on Model-View matrix
    glLoadIdentity();               // Reset the model-view matrix
    glPushMatrix();                     // Save model-view matrix setting
    glTranslatef(-x, 0.3f, 0.0f);    // Translate
    glScalef(0.1, 0.1, 0.1);
    glRotatef(angle, 0.0f, 0.0f, 1.0f); // rotate by angle in degrees
    glBegin(GL_LINE_LOOP);
    glColor3f(0.4, 0.9, 0.9);
    glVertex2f(0.5, 1.5);
    glVertex2f(1, 0.5);
    glVertex2f(2.1820857913818, -0.2454517269911);
    glVertex2f(1.169145104234, -0.1195833575822);
    glVertex2f(1.5, -1.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(-0.5, -1.5);
    glVertex2f(-0.1734508361275, -0.1016021619524);
    glVertex2f(-1.1624165957688, -0.0656397706927);
    glVertex2f(0, 0.5);
    glEnd();
    glPopMatrix();                      // Restore the model-view matrix
    glutSwapBuffers();   // Double buffered - swap the front and back buffers
    if (x >= 1)
        x = -1;
    // Change the rotational angle after each display()
    x += deltax;
    angle += 0.5f;
    glFlush();
    glutPostRedisplay();

}
void star3() {


    glMatrixMode(GL_MODELVIEW);     // To operate on Model-View matrix
    glLoadIdentity();               // Reset the model-view matrix
    glPushMatrix();                     // Save model-view matrix setting
    glTranslatef(x, 0.6f, 0.0f);    // Translate
    glScalef(0.1, 0.1, 0.1);
    glRotatef(angle, 0.0f, 0.0f, 1.0f); // rotate by angle in degrees
    glBegin(GL_LINE_LOOP);
    glColor3f(0.4, 0.9, 0.9);
    glVertex2f(0.5, 1.5);
    glVertex2f(1, 0.5);
    glVertex2f(2.1820857913818, -0.2454517269911);
    glVertex2f(1.169145104234, -0.1195833575822);
    glVertex2f(1.5, -1.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(-0.5, -1.5);
    glVertex2f(-0.1734508361275, -0.1016021619524);
    glVertex2f(-1.1624165957688, -0.0656397706927);
    glVertex2f(0, 0.5);
    glEnd();
    glPopMatrix();                      // Restore the model-view matrix
    glutSwapBuffers();   // Double buffered - swap the front and back buffers
    if (x >= 1)
        x = -1;
    // Change the rotational angle after each display()
    x += deltax;
    angle += 0.5f;
    glFlush();
    glutPostRedisplay();

}
void star4() {


    glMatrixMode(GL_MODELVIEW);     // To operate on Model-View matrix
    glLoadIdentity();               // Reset the model-view matrix
    glPushMatrix();                     // Save model-view matrix setting
    glTranslatef(-x,0.9f, 0.0f);    // Translate
    glScalef(0.1, 0.1, 0.1);
    glRotatef(angle, 0.0f, 0.0f, 1.0f); // rotate by angle in degrees
    glBegin(GL_LINE_LOOP);
    glColor3f(0.4, 0.9, 0.9);
    glVertex2f(0.5, 1.5);
    glVertex2f(1, 0.5);
    glVertex2f(2.1820857913818, -0.2454517269911);
    glVertex2f(1.169145104234, -0.1195833575822);
    glVertex2f(1.5, -1.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(-0.5, -1.5);
    glVertex2f(-0.1734508361275, -0.1016021619524);
    glVertex2f(-1.1624165957688, -0.0656397706927);
    glVertex2f(0, 0.5);
    glEnd();
    glPopMatrix();                      // Restore the model-view matrix
    glutSwapBuffers();   // Double buffered - swap the front and back buffers
    if (x >= 1)
        x = -1;
    // Change the rotational angle after each display()
    x += deltax;
    angle += 0.5f;
    glFlush();
    glutPostRedisplay();

}

void star5() {


                      
     

    glRotatef(angle, 0.0, 0.0, 1.0); 
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.9);
    glVertex2f(0.5, 1.5);
    glVertex2f(1, 0.5);
    glVertex2f(2.1820857913818, -0.2454517269911);
    glVertex2f(1.169145104234, -0.1195833575822);
    glVertex2f(1.5, -1.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(-0.5, -1.5);
    glVertex2f(-0.1734508361275, -0.1016021619524);
    glVertex2f(-1.1624165957688, -0.0656397706927);
    glVertex2f(0, 0.5);
    glEnd();               
      
   
   

}
float f = 0,a=0, sprx = 0.0001,g=-0.2,d=0.5;
float XR = 0.8, YR = -0.4;

void Spong()
{
    
	glScalef(0.1, 0.1, 0.1);
	//SpongeBob Body
	glTranslatef(-8, -5, 0);
	glBegin(GL_QUADS);
	glColor3f(1 , 1 , 0);
	glVertex3f(0 + XR, 0 + YR, 0);
	glVertex3f(4 + XR, 0 + YR, 0);
	glVertex3f(4 + XR, 5 + YR, 0);
	glVertex3f(0 + XR, 5 + YR, 0);
	glEnd();

	//Left Eye
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	for (int i = 0; i <= 360; i++)
	{
		glVertex3f(1.25 + 0.5 * cos(i * 3.1416 / 180) + XR, 3.75 + 0.5 * sin(i * 3.1416 / 180) + YR, 0);
	}
	glEnd();
	glColor3f(0.357, 0.345, 0.87);
	glBegin(GL_POLYGON);
	for (int i = 0; i <= 360; i++)
	{
		glVertex3f(1.25 + 0.2 * cos(i * 3.1416 / 180) + XR, 3.75 + 0.2 * sin(i * 3.1416 / 180) + YR, 0);
	}
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i <= 360; i++)
	{
		glVertex3f(1.25 + 0.1 * cos(i * 3.1416 / 180) + XR, 3.75 + 0.1 * sin(i * 3.1416 / 180) + YR, 0);
	}
	glEnd();

	//Right Eye
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	for (int i = 0; i <= 360; i++)
	{
		glVertex3f(2.75 + 0.5 * cos(i * 3.1416 / 180) + XR, 3.75 + 0.5 * sin(i * 3.1416 / 180) + YR, 0);
	}
	glEnd();
	glColor3f(0.357, 0.345, 0.87);
	glBegin(GL_POLYGON);
	for (int i = 0; i <= 360; i++)
	{
		glVertex3f(2.75 + 0.2 * cos(i * 3.1416 / 180) + XR, 3.75 + 0.2 * sin(i * 3.1416 / 180) + YR, 0);
	}
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i <= 360; i++)
	{
		glVertex3f(2.75 + 0.1 * cos(i * 3.1416 / 180) + XR, 3.75 + 0.1 * sin(i * 3.1416 / 180) + YR, 0);
	}
	glEnd();

	//nose
	glColor3f(0, 0, 0);
	glBegin(GL_LINE_STRIP);
	for (int i = -30; i <= 210; i++)
	{
		glVertex3f(2 + 0.25 * cos(i * 3.1416 / 180) + XR, 3 + 0.25 * sin(i * 3.1416 / 180) + YR, 0);
	}
	glEnd();

	//mouth
	glBegin(GL_LINE_STRIP);
	for (int i = 180; i <= 360; i++)
	{
		glVertex3f(2 + 0.8 * cos(i * 3.1416 / 180) + XR, 2.5 + 0.4 * sin(i * 3.1416 / 180) + YR, 0);
	}
	glEnd();

	//Pants
	glColor3f(0.65, 0.3, 0.13);
	glBegin(GL_QUADS);
	glVertex3f(0 + XR, 0 + YR, 0);
	glVertex3f(4 + XR, 0 + YR, 0);
	glVertex3f(4 + XR, 0.75 + YR, 0);
	glVertex3f(0 + XR, 0.75 + YR, 0);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex3f(0.25 + XR, 0.5 + YR, 0);
	glVertex3f(1.25 + XR, 0.5 + YR, 0);
	glVertex3f(1.25 + XR, 0.65 + YR, 0);
	glVertex3f(0.25 + XR, 0.65 + YR, 0);

	glVertex3f(1.5 + XR, 0.5 + YR, 0);
	glVertex3f(2.5 + XR, 0.5 + YR, 0);
	glVertex3f(2.5 + XR, 0.65 + YR, 0);
	glVertex3f(1.5 + XR, 0.65 + YR, 0);

	glVertex3f(2.75 + XR, 0.5 + YR, 0);
	glVertex3f(3.75 + XR, 0.5 + YR, 0);
	glVertex3f(3.75 + XR, 0.65 + YR, 0);
	glVertex3f(2.75 + XR, 0.65 + YR, 0);
	glEnd();

	//Shirt
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex3f(0 + XR, 0.75 + YR, 0);
	glVertex3f(4 + XR, 0.75 + YR, 0);
	glVertex3f(4 + XR, 1.5 + YR, 0);
	glVertex3f(0 + XR, 1.5 + YR, 0);
	glEnd();


	//necktie

	glColor3f(1, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex3f(1.75 + XR, 1.5 + YR, 0);
	glVertex3f(2 + XR, 1.35 + YR, 0);
	glVertex3f(2.15 + XR, 1.5 + YR, 0);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(2 + XR, 1.35 + YR, 0);
	glVertex3f(1.75 + XR, 1 + YR, 0);
	glVertex3f(2 + XR, 0.75 + YR, 0);
	glVertex3f(2.15 + XR, 1 + YR, 0);
	glEnd();

}




void fish2()
{
    float x = 0, y = 0;

    
        glEnable(GL_POLYGON_SMOOTH);
        //1
        glColor3f(0.4, 0.4, 0.4);
        glBegin(GL_POLYGON);
        glVertex2f(0.45+a, 0.0);
        glVertex2f(0.4+a, 0.3);
        glVertex2f(0.6+a, 0.3);
        glVertex2f(0.6+a, 0.0);
        glEnd();
        //2.1
        glBegin(GL_POLYGON);
        glVertex2f(0.6+a, 0.0);
        glVertex2f(0.6+a, 0.3);
        glVertex2f(0.66+a, 0.15);
        glEnd();
        //2.2
        glBegin(GL_POLYGON);
        glVertex2f(0.66+a, 0.15);
        glVertex2f(0.69+a, 0.245);
        glVertex2f(0.69+a, 0.046);
        glEnd();
        //3.1
        glBegin(GL_POLYGON);
        glVertex2f(0.53+a, 0.3);
        glVertex2f(0.57+a, 0.36);
        glVertex2f(0.57+a, 0.3);
        glEnd();
        //3.2
        glBegin(GL_POLYGON);
        glVertex2f(0.56+a, -0.04);
        glVertex2f(0.54+a, 0.0);
        glVertex2f(0.56+a, 0.0);
        glEnd();
        //m
        glColor3f(0.0, 0.0, 0.0);
        glBegin(GL_LINE_STRIP);
        glVertex2f(0.442+a, 0.05);
        glVertex2f(0.54+a, 0.05);
        glVertex2f(0.54+a, 0.05);
        glVertex2f(0.57+a, 0.1);
        glEnd();
        //4
        glBegin(GL_LINES);
        glVertex2f(0.41+a, 0.28);
        glVertex2f(0.4156+a, 0.26);
        glEnd();
        //5
        glBegin(GL_LINES);
        glVertex2f(0.54+a, 0.24);
        glVertex2f(0.56+a, 0.28);
        glBegin(GL_LINES);
        glVertex2f(0.55+a, 0.24);
        glVertex2f(0.57+a, 0.28);
        glBegin(GL_LINES);
        glVertex2f(0.56+a, 0.24);
        glVertex2f(0.58+a, 0.28);
        glEnd();
        //eye
        float r = 0.015;
        glColor3f(0.0, 0.0, 0.0);
        glBegin(GL_POLYGON); //scalar
        for (float theta = 0; theta < 360; theta++) {
            float deginrad = theta * 3.14 / 180;
            glVertex2f(0.48 + r * cos(deginrad)+a, 0.26 + r * sin(deginrad));

        }
        glEnd();
        //te20 x1=+0.5 x2=x1 prev x3=x2 curr
        float x1 = 0.446, x2 = 0.442, x3 = 0.446;
        for (int i = 0; i < 20; i++) {

            glBegin(GL_POLYGON);
            glVertex2f(x1+a, 0.04);
            glVertex2f(x2+a, 0.05);
            glVertex2f(x3+a, 0.05);
            glEnd();
            x2 = x1;
            x1 += 0.005;
            x3 = x1;

        }

        
       
        glutPostRedisplay();
    }


void fish1()
{

    float x = 0, y = 0;


    glEnable(GL_POLYGON_SMOOTH);
    //1
    glColor3f(0.4, 0.4, 0.4);
    glBegin(GL_POLYGON);
    glVertex2f(0.45 + f, 0.0);
    glVertex2f(0.4 + f, 0.3);
    glVertex2f(0.6 + f, 0.3);
    glVertex2f(0.6 + f, 0.0);
    glEnd();
    //2.1
    glBegin(GL_POLYGON);
    glVertex2f(0.6 + f, 0.0);
    glVertex2f(0.6 + f, 0.3);
    glVertex2f(0.66 + f, 0.15);
    glEnd();
    //2.2
    glBegin(GL_POLYGON);
    glVertex2f(0.66 + f, 0.15);
    glVertex2f(0.69 + f, 0.245);
    glVertex2f(0.69 + f, 0.046);
    glEnd();
    //3.1
    glBegin(GL_POLYGON);
    glVertex2f(0.53 + f, 0.3);
    glVertex2f(0.57 + f, 0.36);
    glVertex2f(0.57 + f, 0.3);
    glEnd();
    //3.2
    glBegin(GL_POLYGON);
    glVertex2f(0.56 + f, -0.04);
    glVertex2f(0.54 + f, 0.0);
    glVertex2f(0.56 + f, 0.0);
    glEnd();
    //m
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.442 + f, 0.05);
    glVertex2f(0.54 + f, 0.05);
    glVertex2f(0.54 + f, 0.05);
    glVertex2f(0.57 + f, 0.1);
    glEnd();
    //4
    glBegin(GL_LINES);
    glVertex2f(0.41 + f, 0.28);
    glVertex2f(0.4156 + f, 0.26);
    glEnd();
    //5
    glBegin(GL_LINES);
    glVertex2f(0.54 + f, 0.24);
    glVertex2f(0.56 + f, 0.28);
    glBegin(GL_LINES);
    glVertex2f(0.55 + f, 0.24);
    glVertex2f(0.57 + f, 0.28);
    glBegin(GL_LINES);
    glVertex2f(0.56 + f, 0.24);
    glVertex2f(0.58 + f, 0.28);
    glEnd();
    //eye
    float r = 0.015;
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //scalar
    for (float theta = 0; theta < 360; theta++) {
        float deginrad = theta * 3.14 / 180;
        glVertex2f(0.48 + r * cos(deginrad) + f, 0.26 + r * sin(deginrad));

    }
    glEnd();
    //te20 x1=+0.5 x2=x1 prev x3=x2 curr
    float x1 = 0.446, x2 = 0.442, x3 = 0.446;
    for (int i = 0; i < 20; i++) {

        glBegin(GL_POLYGON);
        glVertex2f(x1 + f, 0.04);
        glVertex2f(x2 + f, 0.05);
        glVertex2f(x3 + f, 0.05);
        glEnd();
        x2 = x1;
        x1 += 0.005;
        x3 = x1;

    }

   

    glutPostRedisplay();
}

const float DEG2RAD = 3.14 / 180.0;

void drawCircle(float posx, float posy, float r) {
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    for (float theta = 0; theta < 360; theta++) {
        float deg = theta * 3.14 / 180;
        float x = r * cos(deg);
        float y = r * sin(deg);
        glVertex2f(posx + x, posy + y);

    }
    glEnd();
}

void drawEllipse(float posx, float posy, float radx, float rady) {
    glColor3f(0.5f, 0.5f, 0.5f);
    glBegin(GL_POLYGON);

    for (int i = 0; i < 360; i++) {
        float degInRad = i * DEG2RAD;
        glVertex2f((cos(degInRad) * radx) + posx, (sin(degInRad) * rady) + posy);
    }
    glEnd();
}

void pee() {
    glPushMatrix();
    glTranslatef(0.8 + f, 0.8, 0);
    glRotatef(90, 1, 0, 2);
    glScalef(0.14, 0.14, 0.14);
    glBegin(GL_TRIANGLES);
    glColor3f(0.36862745f, 0.69803922f, 0.98823529f);

    glVertex2f(-0.5, 0.12);
    glVertex2f(-0.8, 0.0);
    glVertex2f(-0.5, -0.1);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(0.36862745f, 0.69803922f, 0.98823529f);

    glVertex2f(0.5, 0.12);
    glVertex2f(0.8, 0.0);
    glVertex2f(0.5, -0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0039215686f);

    glVertex2f(-0.1, -0.5);
    glVertex2f(0.0, -0.6);
    glVertex2f(0.08, -0.5);
    glEnd();

    //BODY
    glBegin(GL_QUADS);

    glColor3f(1.0f, 0.88627451f, 0.0f);

    glVertex2f(-0.5, 0.6);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.4985574048859, -0.5001030425082);
    glVertex2f(0.5, 0.6);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0039215686f);

    glVertex2f(-0.5, -0.3);
    glVertex2f(-0.5, -0.2);
    glVertex2f(0.499, -0.2);
    glVertex2f(0.5, -0.3);

    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0039215686f);

    glVertex2f(-0.5, -0.34);
    glVertex2f(-0.5, -0.44);
    glVertex2f(0.5, -0.44);
    glVertex2f(0.498780162816, -0.3399931127902);

    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0039215686f);
    glVertex2f(0.46, 0.86);
    glVertex2f(0.54, 0.86);
    glVertex2f(0.54, 0.8);
    glVertex2f(0.46, 0.8);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 0.8431372549019f, 0.0f);
    glVertex2f(0.5, 0.6);

    glVertex2f(0.5004524532634, 0.8001030425082);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 0.8431372549019f, 0.0f);
    glVertex2f(-0.5, 0.8);

    glVertex2f(-0.5, 0.6);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0039215686f);
    glVertex2f(-0.5405243282891, 0.8594741059284);
    glVertex2f(-0.541404015401, 0.8);
    glVertex2f(-0.46, 0.8);

    glVertex2f(-0.46, 0.86);
    glEnd();




    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0039215686f);

    glVertex2f(-0.1, 0.0);
    glVertex2f(0.0, -0.05);
    glVertex2f(0.1, 0.0);
    glEnd();




    // left side of small eyes
    float r1 = 0.2;
    float posx1 = 0.4, posy1 = 0.3;
    glPointSize(0.5);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (float i = 60; i < 300; i += 1) {
        float deg = i * 3.14 / 180;
        glVertex2f(posx1 + r1 * cos(deg), posy1 + r1 * sin(deg));
    }
    glEnd();


    float r2 = 0.2;
    float posx2 = -0.4, posy2 = 0.3;
    glPointSize(0.5);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (float i = 240; i < 482; i += 1) {
        float deg = i * 3.14 / 180;
        glVertex2f(posx2 + r2 * cos(deg), posy2 + r2 * sin(deg));
    }
    glEnd();


    float r3 = 0.1;
    float posx3 = -0.3777, posy3 = 0.3;
    glPointSize(0.5);
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    for (float i = 0; i < 360; i += 1) {
        float deg = i * 3.14 / 180;
        glVertex2f(posx3 + r3 * cos(deg), posy3 + r3 * sin(deg));
    }
    glEnd();


    float r4 = 0.1;
    float posx4 = 0.3777, posy4 = 0.3;
    glPointSize(0.5);
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    for (float i = 0; i < 360; i += 1) {
        float deg = i * 3.14 / 180;
        glVertex2f(posx4 + r4 * cos(deg), posy4 + r4 * sin(deg));
    }
    glEnd();



    glBegin(GL_LINES);
    glColor3f(1.0f, 0.8431372549019f, 0.0f);
    glVertex2f(0.4984773499309, -0.5);

    glVertex2f(0.5, 0.6);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(1.0f, 0.8431372549019f, 0.0f);
    glVertex2f(-0.5, -0.5);

    glVertex2f(-0.5, 0.6);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(1.0f, 0.8431372549019f, 0.0f);
    glVertex2f(-0.5, 0.6);

    glVertex2f(0.5, 0.6);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(1.0f, 0.8431372549019f, 0.0f);
    glVertex2f(-0.5, -0.5);

    glVertex2f(0.4984773499309, -0.5);
    glEnd();


    glLineWidth(2);
    glPopMatrix();
}


void bee2() {
    glPushMatrix();
    glTranslatef(-0.8 - a, 0.6, 0);
    glRotatef(270, 1, 0, 2);
    glScalef(0.14, 0.14, 0.14);
    glPointSize(9.0);

    drawEllipse(0.58, 0.0, 0.32893, 0.13);
    drawEllipse(0.6, -0.28, 0.32893, 0.13);

    drawEllipse(-0.55, 0.0, 0.32893, 0.13);
    drawEllipse(-0.55, -0.28, 0.32893, 0.13);


    //head
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.4f, 0.6f);
    glVertex2f(0.4f, 0.6f);
    glVertex2f(0.4f, 0);
    glVertex2f(-0.4f, 0);
    glEnd();



    //body
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.28f, 0.0f);
    glVertex2f(0.32f, 0.0f);
    glVertex2f(0.46f, -0.51f);
    glVertex2f(-0.4f, -0.51f);
    glEnd();



    //eyes
    drawCircle(-0.2, 0.4, 0.086);
    drawCircle(0.2, 0.4, 0.086);

    glBegin(GL_POINTS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(0.2f, 0.4f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.26f, 0.89f);
    glVertex2f(-0.24f, 0.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.26f, 0.89f);
    glVertex2f(0.2f, 0.6f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.21f, -0.52f);
    glVertex2f(0.2f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.21f, -0.51f);
    glVertex2f(-0.2f, -0.8f);
    glEnd();
    glPopMatrix();

}

void sand()
{
    glColor3f(1.0, 1.0, 0.7);
    glBegin(GL_POLYGON);
    glVertex2f(-1.0, -1.0);
    glVertex2f(-1.0, -0.849);
    glVertex2f(1.0, -0.849);
    glVertex2f(1.0, -1.0);
    glEnd();

}

void plant()
{
    glColor3f(0.0, 1.0, 0.0);
    glLineWidth(4.0);
    glBegin(GL_LINES);
    glVertex2f(0.9, -0.8);
    glVertex2f(0.8, -0.9);
    glVertex2f(0.8, -0.8);
    glVertex2f(0.8, -0.9);
    glVertex2f(0.7, -0.8);
    glVertex2f(0.8, -0.9);
    glVertex2f(0.75, -0.8);
    glVertex2f(0.8, -0.9);
    glVertex2f(0.85, -0.8);
    glVertex2f(0.8, -0.9);
    glVertex2f(0.725, -0.8);
    glVertex2f(0.8, -0.9);
    glVertex2f(0.775, -0.8);
    glVertex2f(0.8, -0.9);
    glVertex2f(0.825, -0.8);
    glVertex2f(0.8, -0.9);
    glVertex2f(0.875, -0.8);
    glVertex2f(0.8, -0.9);
    glEnd();


    glLineWidth(4.0);
    glBegin(GL_LINES);
    glVertex2f(0.5, -0.95);
    glVertex2f(0.6, -0.85);
    glVertex2f(0.5, -0.85);
    glVertex2f(0.5, -0.95);
    glVertex2f(0.4, -0.85);
    glVertex2f(0.5, -0.95);
    glVertex2f(0.45, -0.85);
    glVertex2f(0.5, -0.95);
    glVertex2f(0.55, -0.85);
    glVertex2f(0.5, -0.95);
    glVertex2f(0.425, -0.85);
    glVertex2f(0.5, -0.95);
    glVertex2f(0.475, -0.85);
    glVertex2f(0.5, -0.95);
    glVertex2f(0.525, -0.85);
    glVertex2f(0.5, -0.95);
    glVertex2f(0.575, -0.85);
    glVertex2f(0.5, -0.95);
    glEnd();



    glLineWidth(4.0);
    glBegin(GL_LINES);
    glVertex2f(0.175, -0.9);
    glVertex2f(0.275, -0.8);
    glVertex2f(0.175, -0.8);
    glVertex2f(0.175, -0.9);
    glVertex2f(0.075, -0.8);
    glVertex2f(0.175, -0.9);
    glVertex2f(0.125, -0.8);
    glVertex2f(0.175, -0.9);
    glVertex2f(0.225, -0.8);
    glVertex2f(0.175, -0.9);
    glVertex2f(0.1, -0.8);
    glVertex2f(0.175, -0.9);
    glVertex2f(0.15, -0.8);
    glVertex2f(0.175, -0.9);
    glVertex2f(0.2, -0.8);
    glVertex2f(0.175, -0.9);
    glVertex2f(0.25, -0.8);
    glVertex2f(0.175, -0.9);
    glEnd();



    glLineWidth(4.0);
    glBegin(GL_LINES);
    glVertex2f(-0.175, -0.95);
    glVertex2f(-0.275, -0.85);
    glVertex2f(-0.175, -0.85);
    glVertex2f(-0.175, -0.95);
    glVertex2f(-0.075, -0.85);
    glVertex2f(-0.175, -0.95);
    glVertex2f(-0.125, -0.85);
    glVertex2f(-0.175, -0.95);
    glVertex2f(-0.225, -0.85);
    glVertex2f(-0.175, -0.95);
    glVertex2f(-0.1, -0.85);
    glVertex2f(-0.175, -0.95);
    glVertex2f(-0.15, -0.85);
    glVertex2f(-0.175, -0.95);
    glVertex2f(-0.2, -0.85);
    glVertex2f(-0.175, -0.95);
    glVertex2f(-0.25, -0.85);
    glVertex2f(-0.175, -0.95);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glVertex2f(-0.475, -0.9);
    glVertex2f(-0.575, -0.8);
    glVertex2f(-0.475, -0.9);
    glVertex2f(-0.475, -0.8);
    glVertex2f(-0.375, -0.8);
    glVertex2f(-0.475, -0.9);
    glVertex2f(-0.425, -0.8);
    glVertex2f(-0.475, -0.9);
    glVertex2f(-0.525, -0.8);
    glVertex2f(-0.475, -0.9);
    glVertex2f(-0.4, -0.8);
    glVertex2f(-0.475, -0.9);
    glVertex2f(-0.45, -0.8);
    glVertex2f(-0.475, -0.9);
    glVertex2f(-0.5, -0.8);
    glVertex2f(-0.475, -0.9);
    glVertex2f(-0.55, -0.8);
    glVertex2f(-0.475, -0.9);
    glEnd();



    glLineWidth(4.0);
    glBegin(GL_LINES);
    glVertex2f(-0.9, -0.85);
    glVertex2f(-0.8, -0.95);
    glVertex2f(-0.8, -0.85);
    glVertex2f(-0.8, -0.95);
    glVertex2f(-0.7, -0.85);
    glVertex2f(-0.8, -0.95);
    glVertex2f(-0.75, -0.85);
    glVertex2f(-0.8, -0.95);
    glVertex2f(-0.85, -0.85);
    glVertex2f(-0.8, -0.95);
    glVertex2f(-0.725, -0.85);
    glVertex2f(-0.8, -0.95);
    glVertex2f(-0.775, -0.85);
    glVertex2f(-0.8, -0.95);
    glVertex2f(-0.825, -0.85);
    glVertex2f(-0.8, -0.95);
    glVertex2f(-0.875, -0.85);
    glVertex2f(-0.8, -0.95);
    glEnd();

}


void pebbles()
{
    glColor3f(0.5, 0.35, 0.05);
    glBegin(GL_POLYGON);
    glVertex2f(0.9, -0.9);
    glVertex2f(0.9125, -0.9);
    glVertex2f(0.925, -0.8875);
    glVertex2f(0.925, -0.875);
    glVertex2f(0.9125, -0.8625);
    glVertex2f(0.9, -0.8625);
    glVertex2f(0.8875, -0.8875);
    glVertex2f(0.8875, -0.875);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0, -0.95);
    glVertex2f(0.0125, -0.95);
    glVertex2f(0.025, -0.9375);
    glVertex2f(0.025, -0.925);
    glVertex2f(0.0125, -0.9125);
    glVertex2f(0, -0.9125);
    glVertex2f(-0.0125, -0.9375);
    glVertex2f(-0.0125, -0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.0125, -0.975);
    glVertex2f(0.025, -0.975);
    glVertex2f(0.0375, -0.9625);
    glVertex2f(0.0375, -0.95);
    glVertex2f(0.025, -0.9375);
    glVertex2f(0.0125, -0.9375);
    glVertex2f(0, -0.9625);
    glVertex2f(0, -0.95);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.025, -0.95);
    glVertex2f(0.0375, -0.95);
    glVertex2f(0.05, -0.9375);
    glVertex2f(0.05, -0.925);
    glVertex2f(0.0375, -0.9125);
    glVertex2f(0.025, -0.9125);
    glVertex2f(0.0125, -0.9375);
    glVertex2f(0.0125, -0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.65, -0.95);
    glVertex2f(0.6625, -0.95);
    glVertex2f(0.675, -0.9375);
    glVertex2f(0.675, -0.925);
    glVertex2f(0.6625, -0.9125);
    glVertex2f(0.65, -0.9125);
    glVertex2f(0.6375, -0.9375);
    glVertex2f(0.6375, -0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.675, -0.95);
    glVertex2f(0.6875, -0.95);
    glVertex2f(0.7, -0.9375);
    glVertex2f(0.7, -0.925);
    glVertex2f(0.6875, -0.9125);
    glVertex2f(0.675, -0.9125);
    glVertex2f(0.6625, -0.9375);
    glVertex2f(0.6625, -0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.6625, -0.985);
    glVertex2f(0.675, -0.985);
    glVertex2f(0.6875, -0.9725);
    glVertex2f(0.6875, -0.96);
    glVertex2f(0.675, -0.9475);
    glVertex2f(0.6625, -0.9475);
    glVertex2f(0.65, -0.9525);
    glVertex2f(0.65, -0.96);
    glEnd();



    glBegin(GL_POLYGON);
    glVertex2f(0.6875, -0.985);
    glVertex2f(0.7, -0.985);
    glVertex2f(0.7125, -0.9725);
    glVertex2f(0.7125, -0.96);
    glVertex2f(0.7, -0.9475);
    glVertex2f(0.6875, -0.9475);
    glVertex2f(0.675, -0.9475);
    glVertex2f(0.675, -0.96);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.6375, -0.985);
    glVertex2f(0.65, -0.985);
    glVertex2f(0.6625, -0.9725);
    glVertex2f(0.6625, -0.96);
    glVertex2f(0.65, -0.9475);
    glVertex2f(0.6375, -0.9475);
    glVertex2f(0.625, -0.9475);
    glVertex2f(0.625, -0.96);
    glEnd();



    glBegin(GL_POLYGON);
    glVertex2f(0.25, -0.95);
    glVertex2f(0.2625, -0.95);
    glVertex2f(0.275, -0.9375);
    glVertex2f(0.275, -0.925);
    glVertex2f(0.2625, -0.9125);
    glVertex2f(0.25, -0.9125);
    glVertex2f(0.2375, -0.9375);
    glVertex2f(0.2375, -0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.275, -0.95);
    glVertex2f(0.2875, -0.95);
    glVertex2f(0.3, -0.9375);
    glVertex2f(0.3, -0.925);
    glVertex2f(0.2875, -0.9125);
    glVertex2f(0.275, -0.9125);
    glVertex2f(0.2625, -0.9375);
    glVertex2f(0.2625, -0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.2625, -0.985);
    glVertex2f(0.275, -0.985);
    glVertex2f(0.2875, -0.9725);
    glVertex2f(0.2875, -0.96);
    glVertex2f(0.275, -0.9475);
    glVertex2f(0.2625, -0.9475);
    glVertex2f(0.25, -0.9525);
    glVertex2f(0.25, -0.96);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.2875, -0.985);
    glVertex2f(0.3, -0.985);
    glVertex2f(0.3125, -0.9725);
    glVertex2f(0.3125, -0.96);
    glVertex2f(0.3, -0.9475);
    glVertex2f(0.2825, -0.9475);
    glVertex2f(0.275, -0.9525);
    glVertex2f(0.275, -0.96);
    glEnd();



    glBegin(GL_POLYGON);
    glVertex2f(-0.35, -0.95);
    glVertex2f(-0.3625, -0.95);
    glVertex2f(-0.375, -0.9375);
    glVertex2f(-0.375, -0.925);
    glVertex2f(-0.3625, -0.9125);
    glVertex2f(-0.35, -0.9125);
    glVertex2f(-0.3375, -0.9375);
    glVertex2f(-0.3375, -0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(-0.375, -0.95);
    glVertex2f(-0.3875, -0.95);
    glVertex2f(-0.4, -0.9375);
    glVertex2f(-0.4, -0.925);
    glVertex2f(-0.3875, -0.9125);
    glVertex2f(-0.375, -0.9125);
    glVertex2f(-0.3625, -0.9375);
    glVertex2f(-0.3625, -0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(-0.3625, -0.985);
    glVertex2f(-0.375, -0.985);
    glVertex2f(-0.3875, -0.9725);
    glVertex2f(-0.3875, -0.96);
    glVertex2f(-0.375, -0.9475);
    glVertex2f(-0.3625, -0.9475);
    glVertex2f(-0.35, -0.9525);
    glVertex2f(-0.35, -0.96);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.3875, -0.985);
    glVertex2f(-0.4, -0.985);
    glVertex2f(-0.4125, -0.9725);
    glVertex2f(-0.4125, -0.96);
    glVertex2f(-0.4, -0.9475);
    glVertex2f(-0.3825, -0.9475);
    glVertex2f(-0.375, -0.9525);
    glVertex2f(-0.375, -0.96);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.3375, -0.985);
    glVertex2f(-0.35, -0.985);
    glVertex2f(-0.3625, -0.9725);
    glVertex2f(-0.3625, -0.96);
    glVertex2f(-0.35, -0.9475);
    glVertex2f(-0.3375, -0.9475);
    glVertex2f(-0.325, -0.9525);
    glVertex2f(-0.325, -0.96);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.65, -0.95);
    glVertex2f(-0.6625, -0.95);
    glVertex2f(-0.675, -0.9375);
    glVertex2f(-0.675, -0.925);
    glVertex2f(-0.6625, -0.9125);
    glVertex2f(-0.65, -0.9125);
    glVertex2f(-0.6375, -0.9375);
    glVertex2f(-0.6375, -0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(-0.675, -0.95);
    glVertex2f(-0.6875, -0.95);
    glVertex2f(-0.7, -0.9375);
    glVertex2f(-0.7, -0.925);
    glVertex2f(-0.6875, -0.9125);
    glVertex2f(-0.675, -0.9125);
    glVertex2f(-0.6625, -0.9375);
    glVertex2f(-0.6625, -0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(-0.6625, -0.985);
    glVertex2f(-0.675, -0.985);
    glVertex2f(-0.6875, -0.9725);
    glVertex2f(-0.6875, -0.96);
    glVertex2f(-0.675, -0.9475);
    glVertex2f(-0.6625, -0.9475);
    glVertex2f(-0.65, -0.9525);
    glVertex2f(-0.65, -0.96);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.9, -0.9);
    glVertex2f(-0.9125, -0.9);
    glVertex2f(-0.925, -0.8875);
    glVertex2f(-0.925, -0.875);
    glVertex2f(-0.9125, -0.8625);
    glVertex2f(-0.9, -0.8625);
    glVertex2f(-0.8875, -0.8875);
    glVertex2f(-0.8875, -0.875);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.9, -0.95);
    glVertex2f(0.9125, -0.95);
    glVertex2f(0.925, -0.9375);
    glVertex2f(0.925, -0.925);
    glVertex2f(0.9125, -0.9125);
    glVertex2f(0.9, -0.9125);
    glVertex2f(0.8875, -0.9375);
    glVertex2f(0.8875, -0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.925, -0.95);
    glVertex2f(0.9375, -0.95);
    glVertex2f(0.95, -0.9375);
    glVertex2f(0.95, -0.925);
    glVertex2f(0.9375, -0.9125);
    glVertex2f(0.925, -0.9125);
    glVertex2f(0.9125, -0.9375);
    glVertex2f(0.9125, -0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(-0.9, -0.95);
    glVertex2f(-0.9125, -0.95);
    glVertex2f(-0.925, -0.9375);
    glVertex2f(-0.925, -0.925);
    glVertex2f(-0.9125, -0.9125);
    glVertex2f(-0.9, -0.9125);
    glVertex2f(-0.8875, -0.9375);
    glVertex2f(-0.8875, -0.925);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(-0.925, -0.95);
    glVertex2f(-0.9375, -0.95);
    glVertex2f(-0.95, -0.9375);
    glVertex2f(-0.95, -0.925);
    glVertex2f(-0.9375, -0.9125);
    glVertex2f(-0.925, -0.9125);
    glVertex2f(-0.9125, -0.9375);
    glVertex2f(-0.9125, -0.925);
    glEnd();
}

void myinit()
{
    glClearColor(0.0, 0.7, 0.9, 0.3);
    glColor3f(1.0, 1.0, 0.0);
}

float c = 0.1, v = 0.1;
void bodyc() {

    glColor3f(0.556f, 0.152f, 0.6f);

    glBegin(GL_QUADS);

    glVertex2f(-0.5012565053729f, 0.7919376547725f);
    glVertex2f(0.5012565053729f, 0.7919376547725f);
    glVertex2f(0.5012565053729f, -0.2077493961919f);
    glVertex2f(-0.5012565053729f, -0.2077493961919f);
    glEnd();

}

void sidelegsc() {
    glColor3f(0.556f, 0.152f, 0.6f);



    glBegin(GL_TRIANGLES);

    glVertex2f(-0.5012565053729f, -0.2077493961919f);
    glVertex2f(-0.316915552598f, -0.7035291531743f);
    glVertex2f(-0.316915552598f, -0.2077493961919f);


    glVertex2f(0.5012565053729f, -0.2077493961919f);
    glVertex2f(0.316915552598f, -0.7035291531743f);
    glVertex2f(0.316915552598f, -0.2077493961919f);

    glVertex2f(-0.3537336692702f, -0.6045078740634f);
    glVertex2f(-0.600186815717f, -0.7452869132215f);
    glVertex2f(-0.316915552598f, -0.7035291531743f);

    glVertex2f(0.3537336692702f, -0.6045078740634f);
    glVertex2f(0.600186815717f, -0.7452869132215f);
    glVertex2f(0.316915552598f, -0.7035291531743f);
    glEnd();


}











void middlelegsc() {



    //body

    glColor3f(0.556f, 0.152f, 0.6f);
    glBegin(GL_TRIANGLES);

    glVertex2f(-0.1950024976023f, -0.2077493961919f);
    glVertex2f(-0.020831184602f, -0.7035291531743f);
    glVertex2f(-0.0186096994163f, -0.2077493961919f);

    glVertex2f(0.1950024976023f, -0.2077493961919f);
    glVertex2f(0.020831184602f, -0.7035291531743f);
    glVertex2f(0.0186096994163f, -0.2077493961919f);

    glVertex2f(-0.2999252987f, -0.7452869132215f);
    glVertex2f(-0.020831184602f, -0.7035291531743f);
    glVertex2f(-0.0534721522666f, -0.6045078740634f);

    glVertex2f(0.2999252987f, -0.7452869132215f);
    glVertex2f(0.020831184602f, -0.7035291531743f);
    glVertex2f(0.0534721522666f, -0.6045078740634f);


    glEnd();


}


void farmc() {



    //body
    glColor3f(0.556f, 0.152f, 0.6f);
    glBegin(GL_TRIANGLES);

    glVertex2f(-0.5012565053729f, -0.0966730571959f);
    glVertex2f(-0.8f, -0.2077493961919f);
    glVertex2f(-0.5012565053729f, -0.2077493961919f);

    glVertex2f(0.5012565053729f, -0.0966730571959f);
    glVertex2f(0.8f, -0.2077493961919f);
    glVertex2f(0.5012565053729f, -0.2077493961919f);

    glVertex2f(-0.8750628665738, 0.0856151817674);
    glVertex2f(-0.8, -0.2077493961919);
    glVertex2f(-0.6828584260851f, -0.1641947835938f);


    glVertex2f(0.8750628665738f, 0.0856151817674f);
    glVertex2f(0.8f, -0.2077493961919f);
    glVertex2f(0.6828584260851f, -0.1641947835938f);

    glEnd();


}



void mouthc() {



    //body
    glLineWidth(3.0f);
    glColor3f(0.6f, 0.1f, 0.1f);
    glBegin(GL_LINE_STRIP);

    glVertex2f(-0.3605438554639f, 0.0611818630958f);
    glVertex2f(-0.2436211630052f, 0.0f);
    glVertex2f(0.2436211630052f, 0.0f);
    glVertex2f(0.3605438554639f, 0.0611818630958f);

    glEnd();


}



void  lefteyec(float r) {
    glColor3f(0.1f, 0.1f, 0.1f);
    glBegin(GL_POLYGON);

    for (float i = 0; i < 360; i += 0.1) {
        float deginrad = i * 3.14 / 180;
        glVertex2f(r * cos(deginrad) + -0.1587797697688, r * sin(deginrad) + 0.4002966518174);

    }
    glEnd();
}




void  Righteyec(float r) {
    glColor3f(0.1f, 0.1f, 0.1f);
    glBegin(GL_POLYGON);

    for (float i = 0; i < 360; i += 0.1) {
        float deginrad = i * 3.14 / 180;
        glVertex2f(r * cos(deginrad) + 0.1587797697688, r * sin(deginrad) + 0.4002966518174);

    }
    glEnd();
}



void  mark1c(float r) {
    glColor3f(0.0f, 0.1f, 0.6f);
    glBegin(GL_LINE_LOOP);

    for (float i = 0; i < 360; i += 0.1) {
        float deginrad = i * 3.14 / 180;
        glVertex2f(r * cos(deginrad) + 0.2874962080964, r * sin(deginrad) + 0.7063678931541);

    }
    glEnd();
}



void  mark2c(float r) {
    glColor3f(0.3f, 0.6f, 0.0f);
    glBegin(GL_LINE_LOOP);

    for (float i = 0; i < 360; i += 0.1) {
        float deginrad = i * 3.14 / 180;
        glVertex2f(r * cos(deginrad) + 0.4398803349663, r * sin(deginrad) + 0.6113751906898);

    }
    glEnd();
}


void  mark3c(float r) {
    glColor3f(0.2f, 0.1f, 0.0f);
    glBegin(GL_LINE_LOOP);

    for (float i = 0; i < 360; i += 0.1) {
        float deginrad = i * 3.14 / 180;
        glVertex2f(r * cos(deginrad) + 0.4, r * sin(deginrad) + 0.7);

    }
    glEnd();
}
void carton() {
    bodyc();
    sidelegsc();
    middlelegsc();
    farmc();
    mouthc();
    lefteyec(0.03);
    Righteyec(0.03);
    mark1c(0.02);
    mark2c(0.02);
    mark3c(0.04);
}


//end character carton
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glPointSize(2.0);
 

    sand();
    glPushMatrix();
    glScalef(2, 1, 1);
    plant();
    glPopMatrix();
    
    pebbles();
   
    
    if (f >= -1.99)
        f = f - 0.0015;
    else
        f = 0;
    if (a >= -1.99)
        a = a - 0.0015;
    else
        a = 0;
  
    glPushMatrix();
    glTranslatef(XR, YR, 0);
    Spong();
    
    glPopMatrix();


    glPushMatrix();
    glTranslatef(d, a, 0);
    glRotatef(180, 1, 1, 0);
    glScalef(4, 1, 2);
    fish2();
    if ((a <=YR)&&(d<=XR)) {
        XR = 100;
        drawText("Game is Over", 0.5, 0.5);
    }
    else {
        XR --;
    }
    glPopMatrix();
    glPushMatrix();
    glTranslatef(x, 0.9f, 0.0f);
    glScalef(0.2, 0.2, 0);
    glRotatef(angle, 0.0f, 0.0f, 1.0f);
    carton();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(g, f, 0);
    glRotatef(180, 1, 1, 0);
    glScalef(4, 1, 2);
    fish1();
    if ((f<=YR)&&(g<=XR)) {
        XR = 100;
        drawText("Game is Over", 0.5, 0.5);

        }
    
    else {
        XR++;
    }
    
    
    glPopMatrix();
    pee();
    bee2();
    star();
    star2();
    star3();
    star4();
    glPushMatrix();
    glTranslatef(-0.9, -0.8, 0.0);
    glScalef(c, 0.1, 0.1);
    star5();
    if (XR<=c) {
        c = 0;
        v = 0;
        
        glClearColor(0.0, 0.0, 1.0, 0.0);
        drawText("YOU WIN", 0.5, 0.5);
        /*ISoundEngine* engine = createIrrKlangDevice();
        engine->play2D("media/getout.ogg", true);
        engine->drop();*/
    }
    glPopMatrix();
    glutPostRedisplay();
    glutSwapBuffers(); 
}


void skeys(int key, int x, int y)
{
    if (key == GLUT_KEY_LEFT)
        XR -= 0.3;
    
   
    if (key == GLUT_KEY_UP)
        YR += 0.3;
}



int main(int argc, char** argv)
{ 
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(500, 500);
    glutCreateWindow("EL HOOT");
    myinit();
    glutDisplayFunc(display);
    glutSpecialFunc(skeys);
   
    ISoundEngine* engine = createIrrKlangDevice();
    engine->play2D("media/Jaws.mp3", true);
    glutMainLoop();
}