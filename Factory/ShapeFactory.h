#pragma once
#include "Shape.h"


class ShapeFactory
{

public:
	virtual Shape* creator(double) const = 0;
	virtual Shape* creator() const=0;
};

