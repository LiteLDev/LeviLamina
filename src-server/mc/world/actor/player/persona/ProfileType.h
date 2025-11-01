#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

enum class ProfileType : uchar {
    Legacy = 0,
    Persona1 = 1,
    Persona2 = 2,
    Persona3 = 3,
    Persona4 = 4,
    Persona5 = 5,
    Count = 6,
    NotFound = 7,
    Multiplayer = 8,
    Temporary = 9,
};

}
