#include <iostream>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include "square.h"

int main()
{
	shape *sptr;
	circle cir;
	rectangle rec;
	square sqr;


	char user;
	std::cin >> user;

	switch (user)
	{
	case 'a':
		sptr = &cir;
			break;
	case 'b':
		sptr = &rec;
		break;
	default:
		sptr = &sqr;
	}

	std::cout << "I'm " << typeid(sptr).name() << std::endl;

	return 0;
}