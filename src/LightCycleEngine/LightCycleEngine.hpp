#ifndef LIGHT_CYCLE_ENGINE_HPP_
#define LIGHT_CYCLE_ENGINE_HPP_

#include <iostream>
#include "Entity.hpp"
#include "LightBarrier.hpp"

using namespace std;
class Entity;
class LightBarrier;

class LightCycleEngine {
public:
	
	vector<Entity*> entities;
	vector<LightBarrier*> barriers;
	unsigned step_count = 0;
	
	LightCycleEngine(vector<Entity*> entities);
	
	void runStep();
};

#endif
