#include <GL/glut.h> ///�ϥ� GLUT�~�� 18��
void myBody()
{
    glColor3f(1,0,0);
    glutWireCube( 0.6 );
}
void myArm()
{
    glPushMatrix();
        glColor3f(0,1,0);
        glScalef(1.5,0.5,0.5);
        glutWireCube( 0.3 );
    glPopMatrix();
}
float angle=0; ///week10-2
void display() ///�ۤv�g
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glPushMatrix();
        myBody();
    glPopMatrix();

    glPushMatrix();///�k�b��
        glTranslatef(+0.3, +0.3,0); ///����ӤW
        glRotatef(angle, 0, 0, 1); ///���
        glTranslatef(0.255,0,0); ///���त�ߡA��b������
        myArm(); ///�k���u


        glPushMatrix(); ///week10-5
            glTranslatef(0.255, 0,0); ///����ӤW
            glRotatef(angle, 0, 0, 1); ///���
            glTranslatef(0.255,0,0); ///���त�ߡA��b������
            myArm();
        glPopMatrix(); ///week10-5
    glPopMatrix();

    glPushMatrix(); ///���b��
        glTranslatef(-0.3, +0.3,0); ///����ӤW
        glRotatef(-angle, 0, 0, 1); ///���
        glTranslatef(-0.255,0,0); ///���त�ߡA��b������
        myArm(); ///�����u


        glPushMatrix(); ///week10-5
            glTranslatef(-0.255, 0,0); ///����ӤW
            glRotatef(-angle, 0, 0, 1); ///���
            glTranslatef(-0.255,0,0); ///���त�ߡA��b������
            myArm();
        glPopMatrix(); ///week10-5
    glPopMatrix();
    glutSwapBuffers(); ///�ۤv�g
}
void motion(int x, int y)
{
    angle = x;
    glutPostRedisplay();
}

int main(int argc, char *argv[]) ///�ڭ̪� main�禡 138��
{
    glutInit(&argc, argv); ///��l�� GLUT 140��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///143��

    glutCreateWindow("week10-7"); ///145�� �ص���

    glutDisplayFunc(display); ///148�� �]�w�n�e�Ϫ�display�禡
    glutMotionFunc(motion);
    glutIdleFunc(display); ///week10-2

    glutMainLoop(); ///174�� �D�n�j��
}
