#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DynamicAmbientSound {
public:
    // prevent constructor by default
    DynamicAmbientSound& operator=(DynamicAmbientSound const&);
    DynamicAmbientSound(DynamicAmbientSound const&);
    DynamicAmbientSound();

public:
    // NOLINTBEGIN
    MCAPI ~DynamicAmbientSound();

    // NOLINTEND
};
