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
	
	LightCycleEngine(vector<Entity*> entities);
	virtual ~LightCycleEngine();
	
	void runStep();
};

#endif
