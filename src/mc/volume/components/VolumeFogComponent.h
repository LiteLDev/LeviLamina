#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VolumeFogComponent {
public:
    // prevent constructor by default
    VolumeFogComponent& operator=(VolumeFogComponent const&);
    VolumeFogComponent(VolumeFogComponent const&);
    VolumeFogComponent();

public:
    // NOLINTBEGIN
    MCAPI class VolumeFogComponent& operator=(class VolumeFogComponent&&);

    // NOLINTEND
};
