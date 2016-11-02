#pragma once
#include  <iostream>

class shape
{
public:
	shape();
	~shape();
	virtual void draw() = 0;
};

