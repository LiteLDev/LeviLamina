#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SoundDataEvent {

struct Fade {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mDuration;
    ::ll::TypedStorage<4, 4, float> mTargetVolume;
    // NOLINTEND
};

} // namespace SoundDataEvent
