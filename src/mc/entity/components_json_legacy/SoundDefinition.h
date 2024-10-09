#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SoundDefinition {
public:
    // prevent constructor by default
    SoundDefinition& operator=(SoundDefinition const&);
    SoundDefinition(SoundDefinition const&);
    SoundDefinition();

public:
    // NOLINTBEGIN
    MCAPI ~SoundDefinition();

    // NOLINTEND
};
