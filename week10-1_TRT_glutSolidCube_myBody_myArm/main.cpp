#include <GL/glut.h> ///使用 GLUT外掛 18行
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
void display() ///自己寫
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glPushMatrix();
        ///glTranslatef(-0.6, +0.3,0);
        myBody();
    glPopMatrix();

    glPushMatrix();
        ///glTranslatef(+0.0, +0.3,0);
        myArm();
    glPopMatrix();

    glutSwapBuffers(); ///自己寫
}


int main(int argc, char *argv[]) ///我們的 main函式 138行
{
    glutInit(&argc, argv); ///初始化 GLUT 140行
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///143行

    glutCreateWindow("week10-1"); ///145行 建視窗

    glutDisplayFunc(display); ///148行 設定要畫圖的display函式

    glutMainLoop(); ///174行 主要迴圈
}
