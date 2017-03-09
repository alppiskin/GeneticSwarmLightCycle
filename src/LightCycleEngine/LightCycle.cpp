#include "LightCycle.hpp"
#include <cmath>

LightCycle::LightCycle(Vec2d pos, Vec2d size, float angle) : DynamicEntity(pos, size, angle) {
	boost_cycles = 100;
	score = 0;
}

void LightCycle::turnLeft(){
	angle -= 1;
}

void LightCycle::turnRight(){
	angle += 1;
}

void LightCycle::run(){
	if (dead) { return; }
	vel = (Vec2d(cos(angle), sin(angle)));
	Vec2d next_pos = Vec2d(vel.x + pos.x, vel.y + pos.y);
	
//	for(size_t i = 0; i < engine->barriers.size(); i++){
//		if (engine->barriers[i]->intersects(pos, next_pos)) {
//			dead = true;
//			score -= 1;
//			engine->barriers[i]->owner->score++;
//		}
//	}
	
}
