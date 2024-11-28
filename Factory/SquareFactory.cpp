#include "SquareFactory.h"

Square* SquareFactory::creator() const
{
    return new Square();
}

Square* SquareFactory::creator(double cote) const
{
    return new Square(cote);
}
