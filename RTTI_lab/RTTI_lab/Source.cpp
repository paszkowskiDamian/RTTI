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

	shape **tab = new shape*[10];

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
	std::cout << "I'm " << typeid(*sptr).name() << std::endl;


	square* newSqr = dynamic_cast<square*>(sptr);
	
	if(newSqr)
	{
		newSqr->superMethod();
	}
	else
	{
		std::cout << "It can't be done" << std::endl; 
	}

	return 0;
}