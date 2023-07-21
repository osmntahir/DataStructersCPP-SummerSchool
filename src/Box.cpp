#include "Box.hpp"

Box::Box()
{   LocationA = new LinkedList();
    LocationB = new LinkedList();
    nextBox =nullptr;
}

Box::~Box()
{
}
