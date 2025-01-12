#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShouldUpdateBoundingBoxRequestComponent {
public:
    // ShouldUpdateBoundingBoxRequestComponent inner types declare
    // clang-format off
    struct UpdateFromDefinition;
    struct UpdateFromValue;
    // clang-format on

    // ShouldUpdateBoundingBoxRequestComponent inner types define
    struct UpdateFromDefinition {};

    struct UpdateFromValue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 8> mUnk5dc410;
        // NOLINTEND

    public:
        // prevent constructor by default
        UpdateFromValue& operator=(UpdateFromValue const&);
        UpdateFromValue(UpdateFromValue const&);
        UpdateFromValue();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk303234;
    // NOLINTEND

public:
    // prevent constructor by default
    ShouldUpdateBoundingBoxRequestComponent& operator=(ShouldUpdateBoundingBoxRequestComponent const&);
    ShouldUpdateBoundingBoxRequestComponent(ShouldUpdateBoundingBoxRequestComponent const&);
    ShouldUpdateBoundingBoxRequestComponent();
};
