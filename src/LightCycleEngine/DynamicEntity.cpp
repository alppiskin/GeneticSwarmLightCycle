#include "DynamicEntity.hpp"

DynamicEntity::DynamicEntity(Vec2d pos, Vec2d size) : Entity(pos, size) {
	this->vel = Vec2d(0, 0);
	this->acc = Vec2d(0, 0);
	type = 1;
}

void DynamicEntity::run(){
	
}
