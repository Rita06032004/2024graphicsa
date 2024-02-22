#include <GL/glut.h>
void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("2024電腦圖學第一週");
    glutDisplayFunc(display);

    glutMainLoop();
}
