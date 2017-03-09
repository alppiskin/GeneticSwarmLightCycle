#ifndef LIGHT_BARRIER_HPP_
#define LIGHT_BARRIER_HPP_

#include <iostream>
#include "Vec2d.hpp"
#include "LightCycle.hpp"

using namespace std;

class LightCycle;

class LightBarrier {
public:
	
	Vec2d a;
	Vec2d b;
	int timeout;
	LightCycle* owner;
	
	LightBarrier(Vec2d a, Vec2d b, int timeout, LightCycle* owner);
	virtual ~LightBarrier();
	
	bool intersects(Vec2d oa, Vec2d ob);
};

#endif
