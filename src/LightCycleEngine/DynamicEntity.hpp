#ifndef DYNAMIC_ENTITY_HPP_
#define DYNAMIC_ENTITY_HPP_

#include <iostream>
#include <vector>

#include "Entity.hpp"

using namespace std;
class Entity;

class DynamicEntity : public Entity {
public:
	Vec2d vel;
	Vec2d acc;

	DynamicEntity(Vec2d pos, Vec2d size, float angle);
	virtual void run();
	virtual unsigned getType();

};

#endif
