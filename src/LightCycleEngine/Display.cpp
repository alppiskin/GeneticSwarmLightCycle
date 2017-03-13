#include "Display.hpp"

Display::Display(LightCycleEngine *engine){
	this->engine = engine;

	if (!glfwInit()){
		std::cout << "GLFW could not initialize...!" << std::endl;
		exit(1);
	}

	window = glfwCreateWindow(640*2, 480*2, "Tron", NULL, NULL);
	if (!window) {
		std::cout << "Could not open window, terminating..." << std::endl;
		glfwTerminate();
		exit(1);
	}

	glfwMakeContextCurrent(window);
	glOrtho(0, 640*2, 0, 480*2, -0.5, 0.5);


}

Display::~Display(){
	
}

void Vec2toGLV(Vec2d point){
	glVertex3d(point.x, point.y, 0.0);
	glColor3f(1.0, 0.0, 0.0);
}

void Display::draw(){
	glClear(GL_COLOR_BUFFER_BIT);
	
	for(unsigned i = 0; i < engine->entities.size(); i++){
		//glBegin(GL_QUADS);
			
		//glEnd();
	}
	glBegin(GL_LINES);
	for(unsigned i = 0; i < engine->barriers.size(); i++){
		
		Vec2toGLV(engine->barriers[i]->a);
		Vec2toGLV(engine->barriers[i]->b);
		
	}
	glEnd();
	
	glfwSwapBuffers(window);
	glfwPollEvents();
}

