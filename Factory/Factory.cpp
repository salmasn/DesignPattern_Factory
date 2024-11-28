
#include <iostream>
#include "CercleFactory.h"
#include "SquareFactory.h"

int main()
{

    ShapeFactory* SC = new CercleFactory();
    ShapeFactory* SS = new SquareFactory();

    Shape* cercle = SC->creator(2.0);
    cercle->draw();
    cercle->surface();
    cercle->perimetre();


    Shape* square = SS->creator(3.0);
    square->draw();
    square->surface();
    square->perimetre();

}
