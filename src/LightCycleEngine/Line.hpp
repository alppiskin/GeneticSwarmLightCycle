#ifndef LINE_HPP_
#define LINE_HPP_

#include <iostream>
#include "Vec2d.hpp"

using namespace std;

class Line {
public:
	
	Vec2d a;
	Vec2d b;
	
	Line(Vec2d a, Vec2d b);
	virtual ~Line();
	
	bool intersects(Line other);
};

#endif
