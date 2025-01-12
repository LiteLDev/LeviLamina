#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct Random {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI int Rand(int, int);

    MCAPI uint Rand(uint);

    MCAPI uint Rand(uint, uint);

    MCAPI explicit Random(uint64);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint64);
    // NOLINTEND
};

} // namespace webrtc
