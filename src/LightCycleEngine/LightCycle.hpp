#ifndef LIGHT_CYCLE_HPP_
#define LIGHT_CYCLE_HPP_

#include <iostream>
#include "DynamicEntity.hpp"
#include "LightBarrier.hpp"

using namespace std;

class LightCycle : public DynamicEntity {
public:
	
	bool dead = false;
	unsigned boost_cycles;
	
	int score;
	
	LightCycle(Vec2d pos, Vec2d size, float angle);
	virtual ~LightCycle();
	
	virtual void run();
	virtual unsigned getType();
	
	void turnLeft();
	void turnRight();
	void boost();

};

#endif
