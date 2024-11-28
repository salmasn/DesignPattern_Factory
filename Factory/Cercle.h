#pragma once
#include "Shape.h"
class Cercle :public Shape
{
private:
	static const double PI;
	double rayon;
public:
	Cercle();
	Cercle(double);
	void draw() const override;
	void perimetre() override;
	void surface() override;
};

