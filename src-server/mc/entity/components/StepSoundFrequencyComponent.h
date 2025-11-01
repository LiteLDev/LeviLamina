#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StepSoundFrequencyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMoveDist;
    ::ll::TypedStorage<4, 4, float> mNextStep;
    // NOLINTEND

};
