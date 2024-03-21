#include <GL/glut.h>
#include <opencv/highgui.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    IplImage *img=cvLoadImage("c:/image.jpg");
    cvShowImage("opencv",img);
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week05");
    glutDisplayFunc(display);

    glutMainLoop();
}
