#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockMapColorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkbc4e29;
    ::ll::UntypedStorage<1, 1>  mUnkda3d8b;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockMapColorComponent& operator=(BlockMapColorComponent const&);
    BlockMapColorComponent(BlockMapColorComponent const&);
    BlockMapColorComponent();
};
