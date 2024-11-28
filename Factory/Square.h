#pragma once
#include "Shape.h"
class Square : public Shape
{
private:
	double cote;
public:
	Square();
	Square(double);
	void draw() const override;
	void perimetre() override;
	void surface() override;
};

