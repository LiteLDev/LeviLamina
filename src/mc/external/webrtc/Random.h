#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct Random {
public:
    // prevent constructor by default
    Random();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int Rand(int, int);

    MCNAPI uint Rand(uint);

    MCNAPI uint Rand(uint, uint);

    MCNAPI explicit Random(uint64);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64);
    // NOLINTEND
};

} // namespace webrtc
