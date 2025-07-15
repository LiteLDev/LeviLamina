#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AirControlledDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka7f38c;
    ::ll::UntypedStorage<4, 4> mUnkce50cf;
    // NOLINTEND

public:
    // prevent constructor by default
    AirControlledDefinition& operator=(AirControlledDefinition const&);
    AirControlledDefinition(AirControlledDefinition const&);
    AirControlledDefinition();
};
