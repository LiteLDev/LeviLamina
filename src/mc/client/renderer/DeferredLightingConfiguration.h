#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DeferredLightingConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnke9a755;
    ::ll::UntypedStorage<1, 1>  mUnk37027d;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredLightingConfiguration& operator=(DeferredLightingConfiguration const&);
    DeferredLightingConfiguration(DeferredLightingConfiguration const&);
    DeferredLightingConfiguration();
};
