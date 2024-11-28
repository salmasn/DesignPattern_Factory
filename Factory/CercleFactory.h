#pragma once
#include "ShapeFactory.h"
#include "Cercle.h"


class CercleFactory :public ShapeFactory
{

public:
	Cercle* creator() const override;
	Cercle* creator(double) const override;
};

