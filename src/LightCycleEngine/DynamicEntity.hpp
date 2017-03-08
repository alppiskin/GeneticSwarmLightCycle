#ifndef DYNAMIC_ENTITY_HPP_
#define DYNAMIC_ENTITY_HPP_

#include <iostream>
#include <vector>

#include "Entity.hpp"

using namespace std;

class DynamicEntity : public Entity {
private:
	Vec2d vel;
	Vec2d acc;
	
public:
	DynamicEntity(Vec2d pos, Vec2d size);
	virtual void run();
	
	
};



#endif
