#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FlatWorldLayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk322b41;
    ::ll::UntypedStorage<4, 4>  mUnk867241;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatWorldLayer& operator=(FlatWorldLayer const&);
    FlatWorldLayer(FlatWorldLayer const&);
    FlatWorldLayer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FlatWorldLayer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
