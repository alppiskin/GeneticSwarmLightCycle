#include "LightCycleEngine.hpp"

LightCycleEngine::LightCycleEngine(vector<Entity*> entities){
	this->entities = entities;
	for (size_t i = 0; i < entities.size(); i++) {
		entities[i]->setEngine(this);
	}
}

void LightCycleEngine::runStep(){
	for (size_t i = 0; i < entities.size(); i++) {
		entities[i]->run();
	}
	step_count++;
	
	vector<LightBarrier*> new_barriers;
	for (size_t i = 0; i < barriers.size(); i++) {
		barriers[i]->timeout--;
		if (barriers[i]->timeout > 1) {
			new_barriers.push_back(barriers[i]);
		} else {
			delete barriers[i];
		}
	}
	
	barriers = new_barriers;
	
}
