#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakNetRandom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 2500> mUnk9cb157;
    ::ll::UntypedStorage<8, 8>    mUnkb6bf35;
    ::ll::UntypedStorage<4, 4>    mUnk3b9378;
    // NOLINTEND

public:
    // prevent constructor by default
    RakNetRandom& operator=(RakNetRandom const&);
    RakNetRandom(RakNetRandom const&);
    RakNetRandom();
};

} // namespace RakNet
