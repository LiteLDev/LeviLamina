#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShouldUpdateBoundingBoxRequestComponent {
public:
    // ShouldUpdateBoundingBoxRequestComponent inner types declare
    // clang-format off
    struct UpdateFromValue;
    // clang-format on

    // ShouldUpdateBoundingBoxRequestComponent inner types define
    struct UpdateFromValue {
    public:
        // prevent constructor by default
        UpdateFromValue& operator=(UpdateFromValue const&);
        UpdateFromValue(UpdateFromValue const&);
        UpdateFromValue();
    };

public:
    // prevent constructor by default
    ShouldUpdateBoundingBoxRequestComponent& operator=(ShouldUpdateBoundingBoxRequestComponent const&);
    ShouldUpdateBoundingBoxRequestComponent(ShouldUpdateBoundingBoxRequestComponent const&);
    ShouldUpdateBoundingBoxRequestComponent();
};
