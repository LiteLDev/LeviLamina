#pragma once

#include "../../Core/mce.h"
#include "persona.h"

class SerializedPersonaPieceHandle {
public:
    std::string name;
    PieceType   type;
    mce::UUID   uuid;
    bool        flag;
    std::string data;
};