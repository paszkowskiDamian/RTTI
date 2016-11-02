#pragma once
#include "shape.h"
#include  <iostream>

class rectangle :
	public shape
{
public:
	rectangle();
	~rectangle();
	virtual void draw();
};

