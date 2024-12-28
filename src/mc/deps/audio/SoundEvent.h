#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SoundEvent {
public:
    // prevent constructor by default
    SoundEvent& operator=(SoundEvent const&);
    SoundEvent(SoundEvent const&);
    SoundEvent();
};
