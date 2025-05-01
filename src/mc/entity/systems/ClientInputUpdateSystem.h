#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class ClientInputUpdateSystem {
public:
    // ClientInputUpdateSystem inner types define
    enum class LookDirection : schar {
        // bitfield representation
        Down  = 0,
        Up    = 1 << 0,
        Left  = 1 << 2,
        Count = 1 << 2,
        Right = Up | Count,
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo create();
    // NOLINTEND
};
