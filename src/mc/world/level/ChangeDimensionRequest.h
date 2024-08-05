#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class ChangeDimensionRequest {
public:
    // prevent constructor by default
    ChangeDimensionRequest& operator=(ChangeDimensionRequest const&);
    ChangeDimensionRequest(ChangeDimensionRequest const&);

public:
    // NOLINTBEGIN
    MCAPI ChangeDimensionRequest();

    MCAPI ChangeDimensionRequest(class ChangeDimensionRequest&&);

    MCAPI ChangeDimensionRequest(DimensionType, DimensionType, class Vec3, class Vec3, bool, bool);

    MCAPI class ChangeDimensionRequest& operator=(class ChangeDimensionRequest&&);

    MCAPI ~ChangeDimensionRequest();

    // NOLINTEND
};
