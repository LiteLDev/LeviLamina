#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackMaps {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk81712c;
    ::ll::UntypedStorage<8, 64> mUnk73a8f7;
    // NOLINTEND

public:
    // prevent constructor by default
    PackMaps& operator=(PackMaps const&);
    PackMaps(PackMaps const&);
    PackMaps();
};
