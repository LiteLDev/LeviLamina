#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AudioContentPlaybackRegistration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka413a9;
    ::ll::UntypedStorage<8, 32> mUnkdef73b;
    ::ll::UntypedStorage<8, 32> mUnkbe53b8;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioContentPlaybackRegistration& operator=(AudioContentPlaybackRegistration const&);
    AudioContentPlaybackRegistration(AudioContentPlaybackRegistration const&);
    AudioContentPlaybackRegistration();
};
