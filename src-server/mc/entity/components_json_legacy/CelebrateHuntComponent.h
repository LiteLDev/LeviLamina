#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Tick.h"

class CelebrateHuntComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCelebrating;
    ::ll::TypedStorage<8, 8, ::Tick> mCelebrateUntil;
    ::ll::TypedStorage<8, 8, ::Tick> mNextSoundEventTick;
    // NOLINTEND

};
