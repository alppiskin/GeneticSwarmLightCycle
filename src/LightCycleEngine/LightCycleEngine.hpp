#ifndef LIGHT_CYCLE_ENGINE_HPP_
#define LIGHT_CYCLE_ENGINE_HPP_

#include <iostream>
#include "Entity.hpp"

using namespace std;
class Entity;

class LightCycleEngine {
public:
	
	vector<Entity*> entities;
	
	LightCycleEngine(vector<Entity*> entities);
	virtual ~LightCycleEngine();
	
	void runStep();
};

#endif
