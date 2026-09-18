#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AudioContentId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk56b17d;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioContentId& operator=(AudioContentId const&);
    AudioContentId(AudioContentId const&);
    AudioContentId();
};
