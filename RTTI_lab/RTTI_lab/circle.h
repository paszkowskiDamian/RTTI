#pragma once
#include "shape.h"
#include  <iostream>

class circle :
	public shape
{
public:
	circle();
	~circle();
	virtual void draw();
};

