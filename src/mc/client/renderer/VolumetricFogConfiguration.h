#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VolumetricFogConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 64> mUnkad89d9;
    ::ll::UntypedStorage<4, 64> mUnkbf87ac;
    ::ll::UntypedStorage<4, 64> mUnkf9d7ed;
    ::ll::UntypedStorage<4, 64> mUnk3ea156;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumetricFogConfiguration& operator=(VolumetricFogConfiguration const&);
    VolumetricFogConfiguration(VolumetricFogConfiguration const&);
    VolumetricFogConfiguration();
};
