#pragma once

#include "CadEntity.h"
#include "Point.h"

class Line : public CadEntity
{
private:
    Point _from;
    Point _to;
    // extra properties

public:
    explicit Line(unsigned int id, Point from, Point to) : CadEntity(id)
    {
        _from = from;
        _to = to;
    }
};