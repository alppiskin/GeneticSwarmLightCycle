#include "Entity.hpp"

Entity::Entity(Vec2d pos, Vec2d size){
	this->pos = pos;
	this->size = size;
	type = 0;
}

void Entity::run(){
	
}

void Entity::setEngine(LightCycleEngine *engine){
	this->engine = engine;
}
