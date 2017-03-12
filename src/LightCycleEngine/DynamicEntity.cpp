#include "DynamicEntity.hpp"

DynamicEntity::DynamicEntity(Vec2d pos, Vec2d size, float angle) : Entity(pos, size, angle) {
	this->vel = Vec2d(0, 0);
	this->acc = Vec2d(0, 0);
}

void DynamicEntity::run(){

}

unsigned DynamicEntity::getType(){
	return 1;
}
