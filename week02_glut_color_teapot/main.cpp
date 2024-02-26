#include <GL/glut.h>

void display() ///¦Û¤v¼g
{
    glColor3f(247/255.0,180/255.0,171/255.0);
    glutSolidTeapot(0.3);

    glColor3f(251/255.0,233/255.0,219/255.0);
    glutSolidTeapot(0.2);

    glutSwapBuffers();
}

int main(int argc, char *argv[]) ///138
{
    glutInit(&argc, argv); ///140
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///143

    glutCreateWindow("GLUT Shapes"); ///145

    glutDisplayFunc(display); ///148

    glutMainLoop(); ///174
}
