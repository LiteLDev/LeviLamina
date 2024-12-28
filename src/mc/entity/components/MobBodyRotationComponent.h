#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobBodyRotationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdb6ed3;
    ::ll::UntypedStorage<4, 4> mUnk353ea1;
    // NOLINTEND

public:
    // prevent constructor by default
    MobBodyRotationComponent& operator=(MobBodyRotationComponent const&);
    MobBodyRotationComponent(MobBodyRotationComponent const&);
    MobBodyRotationComponent();
};
