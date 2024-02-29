#include <GL/glut.h>
void display()
{
    glBegin(GL_POLYGON);
        glVertex2f((72-200)/200.0,-(18-200)/200.0);
        glVertex2f((104-200)/200.0,-(9-200)/200.0);
        glVertex2f((84-200)/200.0,-(52-200)/200.0);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f((259-200)/200.0,-(20-200)/200.0);
        glVertex2f((219-200)/200.0,-(6-200)/200.0);
        glVertex2f((240-200)/200.0,-(57-200)/200.0);
    glEnd();

    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("2024_week02_color_teapot");
    glutDisplayFunc(display);

    glutMainLoop();
}
