#ifndef SCENEBASIC_H
#define SCENEBASIC_H

#include "scene.h"

#include "gl_core_4_4.h"
#include "glslprogram.h"
#include "GLFW\glfw3.h"

class SceneBasic : public Scene
{
private:
	int width, height;
	GLuint vboHandles[2];
	GLuint vaoHandle;
	GLSLProgram prog;

	glm::vec2 mousePos;

	glm::mat4 model;
	glm::mat4 view;
	glm::mat4 projection;
	glm::mat4 mvpMat;

	void setUpMatrices();
	GLFWwindow* window;
public:
	SceneBasic(GLFWwindow* window);

	void initScene();
	void update(double t);
	void render();
	void resize(int, int);

	//callbacks
	void keyCallback(int key, int scancode, int action, int mods);
	void mouseButtonCallback(int btn, int action, int mods);
	void mouseScrollCallback(int offx, int offy);
	void mouseMotionCallback(double x, double y);	
};

#endif // SCENEBASIC_H
