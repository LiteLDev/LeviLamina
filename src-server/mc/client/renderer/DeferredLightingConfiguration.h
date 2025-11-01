#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DeferredLightingConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnke9a755;
    ::ll::UntypedStorage<1, 1>  mUnk37027d;
    ::ll::UntypedStorage<1, 1>  mUnk7fa777;
    ::ll::UntypedStorage<1, 1>  mUnk51238d;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredLightingConfiguration& operator=(DeferredLightingConfiguration const&);
    DeferredLightingConfiguration(DeferredLightingConfiguration const&);
    DeferredLightingConfiguration();
};
