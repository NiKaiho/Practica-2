//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno:ALVAREZ POCEROS ABRAHAM ARTURO//
//*************											******//
//*************											******//
//************************************************************//
#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Poner aqui codigo ha dibujar
	
	
	//glPointSize(10.0);

	/*******************************************************************/

	//LETRA A CONTORNO

	glBegin(GL_LINES);		
	//contorno de la A
	glColor3f(3, 0, 0);
	glVertex3f(0, 9, -1.2);  
	glVertex3f(3, 9, -1.2);									
	glVertex3f(3, 9, -1.2);									
	glVertex3f(5, 0, -1.2);
	glVertex3f(5, 0, -1.2);
	glVertex3f(2.5, 0, -1.2);
	glVertex3f(2.5, 0, -1.2);
	glVertex3f(1.5, 4.5, -1.2);
	glVertex3f(1.5, 4.5, -1.2);
	glVertex3f(0.5, 0, -1.2);
	glVertex3f(0.5, 0, -1.2);
	glVertex3f(-2, 0, -1.2);
	glVertex3f(-2, 0, -1.2);
	glVertex3f(0, 9, -1.2);
	//ventanita de la A
	glColor3f(0, 9.0, 0);
	glVertex3f(1, 8, -1.2);
	glVertex3f(2, 8, -1.2);
	glVertex3f(2, 8, -1.2);
	glVertex3f(2.5, 6, -1.2);
	glVertex3f(2.5, 6, -1.2);
	glVertex3f(0.5, 6, -1.2);
	glVertex3f(0.5, 6, -1.2);
	glVertex3f(1, 8, -1.2);
	glEnd();
	/*******************************************************************/
	//LETRA P POLIGONO
	
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(6, 0, -1.2);
	glVertex3f(8, 0, -1.2);
	glVertex3f(8, 8, -1.2);
	glVertex3f(6, 8, -1.2);
	glEnd();
	//
	glBegin(GL_POLYGON);
	glColor3f(0, 2, 0);
	glVertex3f(6, 8, -1.2);
	glVertex3f(7, 9, -1.2);
	glVertex3f(12, 9, -1.2);
	glVertex3f(12, 8, -1.2);
	glEnd();
	//
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 4);
	glVertex3f(12, 9, -1.2);
	glVertex3f(13, 8, -1.2);
	glVertex3f(13, 5, -1.2);
	glVertex3f(12, 4, -1.2);
	glEnd();
	//
	glBegin(GL_POLYGON);
	glColor3f(0, 9.0, 0);
	glVertex3f(8, 4, -1.2);
	glVertex3f(8, 5, -1.2);
	glVertex3f(12, 5, -1.2);
	glVertex3f(12, 4, -1.2);
	glEnd();


	/*******************************************************************/

	//LETRA A CONTORNO
	
	glBegin(GL_LINES);
	//contorno de la A
	glColor3f(3, 2, 1);
	glVertex3f(15, 9, -1.2);
	glVertex3f(18, 9, -1.2);
	glVertex3f(18, 9, -1.2);
	glVertex3f(20, 0, -1.2);
	glVertex3f(20, 0, -1.2);
	glVertex3f(17.5, 0, -1.2);
	glVertex3f(17.5, 0, -1.2);
	glVertex3f(16.5, 4.5, -1.2);
	glVertex3f(16.5, 4.5, -1.2);
	glVertex3f(15.5, 0, -1.2);
	glVertex3f(15.5, 0, -1.2);
	glVertex3f(13, 0, -1.2);
	glVertex3f(13, 0, -1.2);
	glVertex3f(15, 9, -1.2);
	//ventanita de la A
	glColor3f(-1, 4, 0);
	glVertex3f(16, 8, -1.2);
	glVertex3f(17, 8, -1.2);
	glVertex3f(17, 8, -1.2);
	glVertex3f(17.5, 6, -1.2);
	glVertex3f(17.5, 6, -1.2);
	glVertex3f(15.5, 6, -1.2);
	glVertex3f(15.5, 6, -1.2);
	glVertex3f(16, 8, -1.2);
	glEnd();


	/*******************************************************************/

	//LETRA A POLIGONO

	glBegin(GL_POLYGON);
	glVertex3f(22, 0, -1.2);
	glVertex3f(25, 0, -1.2);
	glVertex3f(26.5, 4.5, -1.2);
	glVertex3f(23.5, 4.5, -1.2);
	glEnd();
	//
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(26.5, 4.5, -1.2);
	glVertex3f(29.5, 4.5, -1.2);
	glVertex3f(31, 0, -1.2);
	glVertex3f(28, 0, -1.2);
	glEnd();
	//
	glBegin(GL_POLYGON);
	glColor3f(3, 2, 0);
	glVertex3f(23.5, 4.5, -1.2);
	glVertex3f(29.5, 4.5, -1.2);
	glVertex3f(29, 6, -1.2);
	glVertex3f(24, 6, -1.2);
	glEnd();
	//
	glBegin(GL_POLYGON);
	glColor3f(0, 5, 2);
	glVertex3f(24, 6, -1.2);
	glVertex3f(25.6, 6, -1.2);
	glVertex3f(26.1, 8, -1.2);
	glVertex3f(24.5, 8, -1.2);
	glEnd();
	//
	glBegin(GL_POLYGON);
	glColor3f(3, 0, 3);
	glVertex3f(27.2, 6, -1.2);
	glVertex3f(29, 6, -1.2);
	glVertex3f(28.5, 8, -1.2);
	glVertex3f(26.7, 8, -1.2);
	glEnd();
	//
	glBegin(GL_POLYGON);
	glColor3f(3, 2, 1);
	glVertex3f(24.5, 8, -1.2);
	glVertex3f(28.5, 8, -1.2);
	glVertex3f(28.1, 9, -1.2);
	glVertex3f(24.8, 9, -1.2);
	glEnd();


	/*******************************************************************/
	//ESTRELLA DE 5 PICOS USANDO GL_TRIANGLE

	glBegin(GL_TRIANGLES); 
	glColor3f(0, 2, 1);
	glVertex3f(35.5, 8, -1.2);
	glVertex3f(36, 6, -1.2);
	glVertex3f(35, 6, -1.2);
	glEnd();

	//
	glBegin(GL_TRIANGLES);
	glColor3f(3, 0, 1);
	glVertex3f(36, 6, -1.2);
	glVertex3f(38, 6, -1.2);
	glVertex3f(36.5, 5, -1.2);
	glEnd();
	//
	glBegin(GL_TRIANGLES);
	glColor3f(3, 2, 0);
	glVertex3f(36.5, 5, -1.2);
	glVertex3f(37, 3, -1.2);
	glVertex3f(35.5, 4, -1.2);
	glEnd();
	//
	glBegin(GL_TRIANGLES);
	glColor3f(0, 0, 1);
	glVertex3f(35.5, 4, -1.2);
	glVertex3f(34, 3, -1.2);
	glVertex3f(34.5, 5, -1.2);
	glEnd();
	//
	glBegin(GL_TRIANGLES);
	glColor3f(3, 0, 0);
	glVertex3f(34.5, 5, -1.2);
	glVertex3f(33, 6, -1.2);
	glVertex3f(35, 6, -1.2);
	glEnd();

	/*******************************************************************/
		

	//glBegin(GL_LINES) -> trabaja con pares de vertices
	//glBegin(GL_POINTS); ->dibuja puntos
	//glBegin(GL_LINE_LOOP); -->cierra vertices en alguna figura
	//glBegin(GL_POLYGON); -->crea un poligono a partir de vertices
	//glColor3f(3.3, 9.0, -9.0); tonalidades de colores
	//glBegin(GL_TRIANGLES); usa 3 vertices para crear triangulos

	//glEnd();				//aqui termina

	glFlush();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-10,50,-10,10,0.1,2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (1000, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 2"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

