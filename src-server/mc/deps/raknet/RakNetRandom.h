#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakNetRandom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 2500, uint[625]> state;
    ::ll::TypedStorage<8, 8, uint*>        next;
    ::ll::TypedStorage<4, 4, int>          left;
    // NOLINTEND
};

} // namespace RakNet
