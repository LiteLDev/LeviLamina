#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StepSoundFrequencyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkcb885a;
    ::ll::UntypedStorage<4, 4> mUnk2c0177;
    // NOLINTEND

public:
    // prevent constructor by default
    StepSoundFrequencyComponent& operator=(StepSoundFrequencyComponent const&);
    StepSoundFrequencyComponent(StepSoundFrequencyComponent const&);
    StepSoundFrequencyComponent();
};
