#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BounceComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk93c7f9;
    ::ll::UntypedStorage<8, 8>  mUnk55a419;
    ::ll::UntypedStorage<4, 4>  mUnk72f5f2;
    // NOLINTEND

public:
    // prevent constructor by default
    BounceComponent& operator=(BounceComponent const&);
    BounceComponent(BounceComponent const&);
    BounceComponent();
};
