#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DayCycleEventComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mPrevTick;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>> mListeningTimeTicks;
    // NOLINTEND

};
