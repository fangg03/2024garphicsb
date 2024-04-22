#include <GL/glut.h> ///使用 GLUT外掛 18行
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
void display() ///自己寫
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glPushMatrix();
        myBody();
    glPopMatrix();

    glPushMatrix();///右半邊
        glTranslatef(+0.3, +0.3,0); ///掛到肩上
        glRotatef(angle, 0, 0, 1); ///轉動
        glTranslatef(0.255,0,0); ///旋轉中心，放在正中心
        myArm(); ///右手臂


        glPushMatrix(); ///week10-5
            glTranslatef(0.255, 0,0); ///掛到肩上
            glRotatef(angle, 0, 0, 1); ///轉動
            glTranslatef(0.255,0,0); ///旋轉中心，放在正中心
            myArm();
        glPopMatrix(); ///week10-5
    glPopMatrix();

    glPushMatrix(); ///左半邊
        glTranslatef(-0.3, +0.3,0); ///掛到肩上
        glRotatef(-angle, 0, 0, 1); ///轉動
        glTranslatef(-0.255,0,0); ///旋轉中心，放在正中心
        myArm(); ///左手臂


        glPushMatrix(); ///week10-5
            glTranslatef(-0.255, 0,0); ///掛到肩上
            glRotatef(-angle, 0, 0, 1); ///轉動
            glTranslatef(-0.255,0,0); ///旋轉中心，放在正中心
            myArm();
        glPopMatrix(); ///week10-5
    glPopMatrix();
    glutSwapBuffers(); ///自己寫
}
void motion(int x, int y)
{
    angle = x;
    glutPostRedisplay();
}

int main(int argc, char *argv[]) ///我們的 main函式 138行
{
    glutInit(&argc, argv); ///初始化 GLUT 140行
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///143行

    glutCreateWindow("week10-7"); ///145行 建視窗

    glutDisplayFunc(display); ///148行 設定要畫圖的display函式
    glutMotionFunc(motion);
    glutIdleFunc(display); ///week10-2

    glutMainLoop(); ///174行 主要迴圈
}
