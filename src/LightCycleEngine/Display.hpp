#ifndef DISPLAY_HPP_
#define DISPLAY_HPP_

#include <iostream>
#include <GLFW/glfw3.h>
#include "LightCycleEngine.hpp"

class LightCycleEngine;

class Display {
public:
	LightCycleEngine* engine;
	GLFWwindow *window;

	Display(LightCycleEngine* engine);
	virtual ~Display();
	void draw();
};

#endif
