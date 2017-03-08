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
}
