#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GlidingCollisionDamageComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkfcc444;
    // NOLINTEND

public:
    // prevent constructor by default
    GlidingCollisionDamageComponent& operator=(GlidingCollisionDamageComponent const&);
    GlidingCollisionDamageComponent(GlidingCollisionDamageComponent const&);
    GlidingCollisionDamageComponent();
};
