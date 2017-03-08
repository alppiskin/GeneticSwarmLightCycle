#ifndef ENTITY_HPP_
#define ENTITY_HPP_

#include <iostream>
#include <vector>

#include "Vec2d.hpp"
#include "LightCycleEngine.hpp"

class LightCycleEngine;

using namespace std;

class Entity {
private:
	Vec2d pos;
	Vec2d size;
	LightCycleEngine *engine;
public:
	Entity(Vec2d pos, Vec2d size);
	virtual void run();
	void setEngine(LightCycleEngine *engine);
protected:
	unsigned type;
};

#endif
