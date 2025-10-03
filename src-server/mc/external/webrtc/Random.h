#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class Random {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkcbfbce;
    // NOLINTEND

public:
    // prevent constructor by default
    Random& operator=(Random const&);
    Random(Random const&);
    Random();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int Rand(int low, int high);

    MCNAPI uint Rand(uint t);

    MCNAPI uint Rand(uint low, uint high);

    MCNAPI explicit Random(uint64 seed);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64 seed);
    // NOLINTEND
};

} // namespace webrtc
