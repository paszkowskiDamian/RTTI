#pragma once
#include "rectangle.h"
#include  <iostream>

class square :
	public rectangle
{
public:
	square();
	~square();
	virtual void draw();
	void superMethod();
};

