#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeHeight {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5f76e7;
    ::ll::UntypedStorage<4, 4> mUnk60eb1a;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeHeight& operator=(BiomeHeight const&);
    BiomeHeight(BiomeHeight const&);
    BiomeHeight();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& MIN_DEPTH();
    // NOLINTEND
};
