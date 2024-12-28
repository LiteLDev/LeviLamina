#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UsesDefaultStepSoundComponent {
public:
    // prevent constructor by default
    UsesDefaultStepSoundComponent& operator=(UsesDefaultStepSoundComponent const&);
    UsesDefaultStepSoundComponent(UsesDefaultStepSoundComponent const&);
    UsesDefaultStepSoundComponent();
};
