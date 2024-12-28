#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BoatMovementComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9845f9;
    ::ll::UntypedStorage<4, 4> mUnkb2a3c3;
    ::ll::UntypedStorage<4, 4> mUnke2acdf;
    // NOLINTEND

public:
    // prevent constructor by default
    BoatMovementComponent& operator=(BoatMovementComponent const&);
    BoatMovementComponent(BoatMovementComponent const&);
    BoatMovementComponent();
};
