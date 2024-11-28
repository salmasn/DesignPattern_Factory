#include "Cercle.h"
#include<iostream>
#include<cmath>
const double Cercle::PI = 3.14;

Cercle::Cercle():rayon(0)
{
	std::cout << "contruction de cercle" << std::endl;
}

Cercle::Cercle(double r) :rayon(r)
{
}

void Cercle::draw() const
{
	std::cout << "desin de cercle" << std::endl;
}

void Cercle::perimetre()
{
	this->perm= 2 * PI * rayon;
	std::cout << "perimtre est :" << perm << std::endl;
}

void Cercle::surface()
{
	this->surf = pow(this->rayon, 2) * PI;
	std::cout << "surface est :" << surf << std::endl;
}
