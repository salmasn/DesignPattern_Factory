#pragma once
class Shape
{
protected:
	double surf;
	double perm;
public:
	virtual void draw() const=0;
	virtual void surface()= 0;
	virtual void perimetre()= 0;
};

