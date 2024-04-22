#include <GL/glut.h> ///�ϥ� GLUT�~�� 18��
void myBody()
{
    glColor3f(1,0,0);
    glutWireCube( 0.6 );
}
void myArm()
{
    glColor3f(0,1,0);
    glScalef(1.5,0.5,0.5);
    glutWireCube( 0.3 );
}
float angle=0; ///week10-2
void display() ///�ۤv�g
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glPushMatrix();
        myBody();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(+0.3, +0.3,0);
        glRotatef(angle++, 0, 0, 1); ///week10-2
        glTranslatef(0.255,0,0);
        myArm();
    glPopMatrix();

    glutSwapBuffers(); ///�ۤv�g
}


int main(int argc, char *argv[]) ///�ڭ̪� main�禡 138��
{
    glutInit(&argc, argv); ///��l�� GLUT 140��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///143��

    glutCreateWindow("week10-4"); ///145�� �ص���

    glutDisplayFunc(display); ///148�� �]�w�n�e�Ϫ�display�禡
    glutIdleFunc(display); ///week10-2

    glutMainLoop(); ///174�� �D�n�j��
}
