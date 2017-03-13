#include <iostream>
#include "LightCycleEngine/Display.hpp"

using namespace std;

int main(int argc, char* argv[]){
	std::cout << "Test :)" << std::endl;
	
	vector<Entity*> e;
	for (int i = 0; i < 10; i++) {
		e.push_back(new LightCycle(Vec2d(605, 480+i*10), Vec2d(0.1, 0.5), 180));
		e.push_back(new LightCycle(Vec2d(200+i*10, 400), Vec2d(0.1, 0.5), 90));
		
	}

	LightCycleEngine l = LightCycleEngine(e);
	Display d = Display(&l);
	
	int i = 0;
	clock_t begin = clock();

	
	while (true) {
		i++;
		e[0]->angle += 15;
		l.runStep();
		if(i % 1 == 0){
			clock_t end = clock();
			double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
			cout << elapsed_secs << endl;
			d.draw();
			begin = clock();
		}
	}
	
	return 0;
}
