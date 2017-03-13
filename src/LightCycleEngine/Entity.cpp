#include "Entity.hpp"

Entity::Entity(Vec2d pos, Vec2d size, double angle){
	this->pos = pos;
	this->size = size;
	this->angle = angle;
	this->engine = NULL;
}

Entity::~Entity(){
	
}

void Entity::run(){
	
}

void Entity::setEngine(LightCycleEngine *engine){
	this->engine = engine;
}

unsigned Entity::getType(){
	return 0;
}
