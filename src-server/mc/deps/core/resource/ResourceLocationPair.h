#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourceLocationPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk264a6d;
    ::ll::UntypedStorage<8, 48> mUnk2ae1ce;
    ::ll::UntypedStorage<4, 4>  mUnk9d3d38;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceLocationPair& operator=(ResourceLocationPair const&);
    ResourceLocationPair(ResourceLocationPair const&);
    ResourceLocationPair();
};
