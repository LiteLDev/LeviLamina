#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct Tick;
// clang-format on

class CelebrateHuntComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>   mCelebrating;
    ::ll::TypedStorage<8, 8, ::Tick> mCelebrateUntil;
    ::ll::TypedStorage<8, 8, ::Tick> mNextSoundEventTick;
    // NOLINTEND
};
