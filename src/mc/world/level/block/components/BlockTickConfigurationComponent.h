#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

class BlockTickConfigurationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mDelayIntervalMinTicks;
    ::ll::TypedStorage<4, 4, uint> mDelayIntervalMaxTicks;
    ::ll::TypedStorage<1, 1, bool> mLooping;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int getRandomTickDelay(::Random& random) const;
    // NOLINTEND
};
