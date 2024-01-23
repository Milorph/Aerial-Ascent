// Jun-Yea and Robert
// Split screen vertical parkour speedrunning game

#include <glad.h>
#include <GLFW/glfw3.h>
#include "GLXtras.h"

int winWidth = 400, winHeight = 400;

GLuint vBuffer = 0;													
GLuint program = 0;

void Display() {
	glUseProgram(program);											
	glBindBuffer(GL_ARRAY_BUFFER, vBuffer);							
	VertexAttribPointer(program, "point", 2, 0, (void*)0);		
	glDrawArrays(GL_QUADS, 0, 4);									
	glFlush();														
}

int main() {														
	GLFWwindow* w = InitGLFW(100, 100, winWidth, winHeight, "Clear");
	while (!glfwWindowShouldClose(w)) {								
		Display();
		glfwSwapBuffers(w);											
		glfwPollEvents();
	}
	glfwDestroyWindow(w);
	glfwTerminate();
}