#ifndef VEC2D_HPP_
#define VEC2D_HPP_

#include <iostream>

using namespace std;

class Vec2d {
public:
	double x;
	double y;
	Vec2d();
	Vec2d(double x, double y);
	
	Vec2d& operator+=(const Vec2d& other);
	
};

#endif
