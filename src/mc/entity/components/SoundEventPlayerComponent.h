#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SoundEventPlayerComponent {

public:
    // prevent constructor by default
    SoundEventPlayerComponent& operator=(SoundEventPlayerComponent const&) = delete;
    SoundEventPlayerComponent(SoundEventPlayerComponent const&)            = delete;
    SoundEventPlayerComponent()                                            = delete;
};
