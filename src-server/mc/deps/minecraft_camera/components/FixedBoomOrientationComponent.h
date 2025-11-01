#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct FixedBoomOrientationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk399e1b;
    // NOLINTEND

public:
    // prevent constructor by default
    FixedBoomOrientationComponent& operator=(FixedBoomOrientationComponent const&);
    FixedBoomOrientationComponent(FixedBoomOrientationComponent const&);
    FixedBoomOrientationComponent();
};

} // namespace MinecraftCamera
