#pragma once
#include "ShapeFactory.h"
#include "Square.h"


class SquareFactory :public ShapeFactory
{


public:
	Square* creator() const override;
	Square* creator(double) const override;
};

