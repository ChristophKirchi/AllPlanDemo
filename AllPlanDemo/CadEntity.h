#pragma once

class CadEntity
{
protected:
    unsigned int _id;

public:
    explicit CadEntity(unsigned int id)
    {
        _id = id;
    }
};