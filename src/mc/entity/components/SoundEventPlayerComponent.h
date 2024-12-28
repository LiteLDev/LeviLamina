#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SoundEventPlayerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkbfe20e;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundEventPlayerComponent& operator=(SoundEventPlayerComponent const&);
    SoundEventPlayerComponent(SoundEventPlayerComponent const&);
    SoundEventPlayerComponent();
};
