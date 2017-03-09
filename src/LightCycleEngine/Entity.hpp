#ifndef ENTITY_HPP_
#define ENTITY_HPP_

#include <iostream>
#include <vector>

#include "Vec2d.hpp"
class LightCycleEngine;

using namespace std;

class Entity {
private:

public:
	Vec2d pos;
	Vec2d size;
	float angle;
	LightCycleEngine *engine;
	
	Entity(Vec2d pos, Vec2d size, double angle);
	virtual void run();
	void setEngine(LightCycleEngine *engine);
	virtual unsigned getType();
};

#endif
