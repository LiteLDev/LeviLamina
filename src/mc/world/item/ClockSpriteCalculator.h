#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Vec3;
// clang-format on

class ClockSpriteCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkae8f05;
    ::ll::UntypedStorage<4, 4> mUnk650ca6;
    ::ll::UntypedStorage<4, 4> mUnkfdca61;
    // NOLINTEND

public:
    // prevent constructor by default
    ClockSpriteCalculator& operator=(ClockSpriteCalculator const&);
    ClockSpriteCalculator(ClockSpriteCalculator const&);
    ClockSpriteCalculator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int update(::BlockSource const& region, ::Vec3 const& pos, bool instant);
    // NOLINTEND
};
