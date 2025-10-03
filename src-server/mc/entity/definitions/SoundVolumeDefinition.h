#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SoundVolumeDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5ece06;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundVolumeDefinition& operator=(SoundVolumeDefinition const&);
    SoundVolumeDefinition(SoundVolumeDefinition const&);
    SoundVolumeDefinition();
};
