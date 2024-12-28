#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FallDistanceComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5586bd;
    ::ll::UntypedStorage<1, 1> mUnk7c6cf8;
    ::ll::UntypedStorage<1, 1> mUnk8db5a2;
    ::ll::UntypedStorage<1, 1> mUnk86e4e7;
    // NOLINTEND

public:
    // prevent constructor by default
    FallDistanceComponent& operator=(FallDistanceComponent const&);
    FallDistanceComponent(FallDistanceComponent const&);
    FallDistanceComponent();
};
