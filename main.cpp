#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <gl/glut.h>

using namespace std;
void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60, 1, 1, 100);
    glMatrixMode(GL_MODELVIEW);
}
void displayString(char* text){

    for (int i = 0; i < strlen(text); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
}
void display() {

     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

   // Set up the camera position and orientation
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
   gluLookAt(0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

   // Set up the lighting and material properties
  // glEnable(GL_LIGHTING);
   //glEnable(GL_LIGHT0);
   GLfloat light_pos[] = {0.0, 5.0, 5.0, 1.0};
   glLightfv(GL_LIGHT0, GL_POSITION, light_pos);
   GLfloat mat_diffuse[] = {0.5, 0.5, 0.5, 1.0};
   //glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);

   // Draw the room
    glColor3f(44.0f/255.0f, 54.0f/255.0f, 57.0f/255.0f);
     glColor3f(158.0f/255.0f, 118.0f/255.0f, 118.0f/255.0f);
      glColor3f(1.0, 0.0, 0.0);
   glBegin(GL_QUADS);
   glColor3f(1.0, 1.0, 1.0);
   glVertex3f(-2.0, -2.0, -2.0);
   glVertex3f(-2.0, -2.0, 2.0);
   glVertex3f(2.0, -2.0, 2.0);
   glVertex3f(2.0, -2.0, -2.0);
   glEnd();




  //glColor3f(167.0f/255.0f, 114.0f/255.0f, 125.0f/255.0f);
  glColor3f(158.0f/255.0f, 118.0f/255.0f, 118.0f/255.0f);

   glClearColor(231.0f/255.0f, 171.0f/255.0f, 121.0f/255.0f,1.0);

//left wall
  // Draw a rectangle with vertices (0, 0), (0, 1), (1, 1), (1, 0)
  glBegin(GL_QUADS);
  glVertex2f(1.43, -1.43);
  glVertex2f(1.43, 4.0);
  glVertex2f(4.0, 4.0);
  glVertex2f(4.0, -4.0);
  glEnd();

//glColor3f(255,23,0);
//right wall
  // Draw a rectangle with vertices (0, 0), (0, 1), (1, 1), (1, 0)

  glBegin(GL_QUADS);
  glVertex2f(-3, -3.0);
  glVertex2f(-3, 4.0);
  glVertex2f(-1.43, 4.0);
  glVertex2f(-1.43, -1.43);
  glEnd();

  //welcome display


  //entrance door

   //glColor3f(1.0, 0.0, 0.0);
  glBegin(GL_QUADS);
  glVertex2f(.3,0.2);
  glVertex2f(.3, -1.43);
  glVertex2f(-0.3, -1.43);
  glVertex2f(-0.3, .2);
  glEnd();
  //midle line
  glColor3f(0.0, 0.0, 0.0); // set color to red
    glBegin(GL_LINES); // enable line drawing mode
    glVertex2f(0.0, -1.414); // specify first vertex
    glVertex2f(0.0, 0.215); // specify second vertex
    glEnd();

      glColor3f(0.0, 0.0, 0.0); // set color to red
    glBegin(GL_LINES); // enable line drawing mode
    glVertex2f(1.43, -1.43);
  glVertex2f(1.43, 4.0);
    glEnd();
     glColor3f(0.0, 0.0, 0.0); // set color to red
    glBegin(GL_LINES); // enable line drawing mode
    glVertex2f(-1.43, -1.43);
  glVertex2f(-1.43, 4.0);
    glEnd();

    glColor3f(0.0, 0.0, 0.0); // set color to red
    glBegin(GL_LINES); // enable line drawing mode
  glVertex2f(-1.43, -1.43);
  glVertex2f(-3, -3.0);
    glEnd();

     glColor3f(0.0, 0.0, 0.0); // set color to red
    glBegin(GL_LINES); // enable line drawing mode
  glVertex2f(1.43, -1.43);
  glVertex2f(3, -3.0);
    glEnd();

     glColor3f(0.0, 0.0, 0.0); // set color to red
    glBegin(GL_LINES); // enable line drawing mode
  glVertex2f(1.43, -1.43);
  glVertex2f(-1.43, -1.43);
    glEnd();

   char* wel ="WELCOME";
   glColor3f(0.0f, 0.0f, 0.0f);
   glRasterPos2f(-0.25f, 0.3f);
          displayString(wel);









   // glLoadIdentity();
    gluLookAt(0, 0, 10, 0, 0, 0, 0, 1, 0);

    // Draw table
    glColor3f(0.5, 0.35, 0.05);
    glPushMatrix();
    glTranslatef(0.0, -6.0, 0.0);
    glScalef(2.0, 0.1, 1.0);
    glutSolidCube(2.0);
    glPopMatrix();


     // Draw table legs
    glColor3f(0.5, 0.35, 0.05);
    glPushMatrix();
    glTranslatef(-1.5, -7.0, -0.5);
    glScalef(0.1, 1.0, 0.1);
    glutSolidCube(2.0);
    glPopMatrix();

    glColor3f(0.5, 0.35, 0.05);
    glPushMatrix();
    glTranslatef(-1.5, -7.0, 0.5);
    glScalef(0.1, 1.0, 0.1);
    glutSolidCube(2.0);
    glPopMatrix();

    glColor3f(0.5, 0.35, 0.05);
    glPushMatrix();
    glTranslatef(1.5, -7.0, -0.5);
    glScalef(0.1, 1.0, 0.1);
    glutSolidCube(2.0);
    glPopMatrix();

    glColor3f(0.5, 0.35, 0.05);
    glPushMatrix();
    glTranslatef(1.5, -7.0, 0.5);
    glScalef(0.1, 1.0, 0.1);
    glutSolidCube(2.0);
    glPopMatrix();

    //chair 1
    glColor3f(0.3, 0.3, 1.0);
    glPushMatrix();
    glTranslatef(-3.5, -7.5, -1.0);
    glScalef(0.5, 1.0, 0.5);
    glutSolidCube(2.0);
    glPopMatrix();
    //chair 2
     glColor3f(0.3, 0.3, 1.0);
    glPushMatrix();
    glTranslatef(3.5, -7.5, -1.0);
    glScalef(0.5, 1.0, 0.5);
    glutSolidCube(2.0);
    glPopMatrix();



    glutSwapBuffers();
}
void newdisp()
{ char* message="Welcome to our restaurant";

     glClear(GL_COLOR_BUFFER_BIT);
     glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Table");
    init();
    glutDisplayFunc(display);
    glutMainLoop();

}

void ButtonCallBack(int button,int state,int x,int y)
{
    if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
    {
        //if(y <= 380 && y>=310 && x>=530 && x>=580)
       // if(x>=630 && x<=750 )
       if(y>=430 && y<=500)
        {
        glutCreateWindow("NEW_WINDOW");
        glutDisplayFunc(newdisp);
        }
    glutPostRedisplay();
    }
}



void Display()
{
    glColor3f(0.0f, 0.0f, 0.0f);  // Set the text color

   char* rest = "THE IMPERIAL";
    char* name="Name";
    char* usn="USN";
    char* amith="Amith Jagannath Soorenji";
    char* adarsh="Adarsh J Shetty";
    char* usn23="4NM20CS023";
    char* usn10="4NM20CS010";
    char* next ="Next";
    char* sir="Under the guidance of Dr Pradeep Kanchan and Mr Puneet RP";

         glRasterPos2f(-9.0f, 80.0f);
          displayString(rest);


      glRasterPos2i(-45.0f,70.0f);
       displayString(name);
    glRasterPos2i(40.0f,70.0f);
   displayString(usn);
    glRasterPos2i(-55.0f,62.0f);
    displayString(amith);
    glRasterPos2i(-55.0f,54.0f);
    displayString(adarsh);
     glRasterPos2i(34.0f,62.0f);
   displayString(usn23);
     glRasterPos2i(34.0f,54.0f);
    displayString(usn10);
    glRasterPos2i(-35.0f,46.0f);
    displayString(sir);
    glColor3f(0.6f, 9.0f, 8.0f);
    glPushMatrix();
    glRectf(-10,35,5,28);
   glColor3f(0.0f, 0.0f, 0.4f);//Text color of "NEXT"

    glRasterPos2f(-6.0f, 30.0f);
    for (int i = 0; i < strlen(next); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, next[i]);
    }


    glEnd();
    glFlush();
    glutPostRedisplay();
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(10,10);
    glutInitWindowSize(1500,1500);
    glutCreateWindow("TEXT_DISPLAY");
    glClearColor(223.0f/255.0f, 255.0f/255.0f, 216.0f/255.0f,1.0);
    glMatrixMode(GLUT_SINGLE|GLUT_RGB);
    glLoadIdentity();
    glOrtho(-90.0,100.0,-15.0,100.0,0.0,1.0);
    glutDisplayFunc(Display);
    glutMouseFunc(ButtonCallBack);
    glutMainLoop();
}
