#include "LightCycle.hpp"
#include <cmath>
#include <vector>
#include "LightCycleEngine.hpp"

using std::vector;

LightCycle::LightCycle(Vec2d pos, Vec2d size, float angle) : DynamicEntity(pos, size, angle) {
	boost_cycles = 100;
	score = 0;
	engine = NULL;
}

LightCycle::~LightCycle(){
	
}

void LightCycle::turnLeft(){
	angle -= 1;
}

void LightCycle::turnRight(){
	angle += 1;
}

unsigned LightCycle::getType(){
	return 2;
}

float get_radians(float input){
	return input * M_PI / 180.0;
}

void LightCycle::run(){
	
	int timeout = 500;
	
	if (!dead) {
		vel = Vec2d(cos(get_radians(angle)), sin(get_radians(angle)));
		Vec2d next_pos = Vec2d(vel.x*3 + pos.x, vel.y*3 + pos.y);
		
		for(size_t i = 0; i < engine->barriers.size(); i++){
			if(engine->barriers[i]->timeout < timeout-1) if (engine->barriers[i]->intersects(pos, next_pos)) {
				engine->barriers[i];
				dead = true;
				score -= 1;
				engine->barriers[i]->owner->score++;
			}
		}
		
		LightBarrier* lb = new LightBarrier(next_pos, pos, timeout, this);
		pos = next_pos;
		engine->barriers.push_back(lb);
	}
	
	

}

// takes the index and generates the minimum and maximum boundary values for the desired range factor
// tested on input (100, 345) and generated 300 and 400
vector<long long int> LightCycle::hitRange(long long int bound_factor, long long int index) {
	vector<long long int> range;
	for(size_t i = 1; i < (unsigned long long int)index; i++) {
		long long int a = i * bound_factor;
		if (a > index) {
			long long int max_r = a;
			long long int min_r = (i - 1) * bound_factor;
			range.push_back(min_r);
			range.push_back(max_r);
			break;
		}
	}
return range;
}

