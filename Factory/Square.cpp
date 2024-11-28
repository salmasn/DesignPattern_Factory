#include "Square.h"
#include<iostream>


Square::Square():cote(0)
{
	std::cout << "contruction de square" << std:: endl;
}

Square::Square(double c): cote(c)
{
}



void Square::draw() const
{
	std::cout << "desin de square" << std::endl;
}


void Square::perimetre()
{
	this->perm = cote*4;
	std::cout << "perimtre est :" << perm << std::endl;
}

void Square::surface()
{
	this->surf = pow(this->cote, 2);
	std::cout << "surface est :" << surf << std::endl;
}

