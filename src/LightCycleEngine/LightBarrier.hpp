#ifndef LIGHT_BARRIER_HPP_
#define LIGHT_BARRIER_HPP_

#include <iostream>
#include "Vec2d.hpp"

using namespace std;

class LightBarrier {
public:
	
	Vec2d a;
	Vec2d b;
	
	LightBarrier(Vec2d a, Vec2d b);
	virtual ~LightBarrier();
	
	bool intersects(LightBarrier other);
};

#endif
