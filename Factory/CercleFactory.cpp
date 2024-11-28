#include "CercleFactory.h"

Cercle* CercleFactory::creator() const
{
    return new Cercle();
}

Cercle* CercleFactory::creator(double rayon) const
{
    return new Cercle(rayon);
}
