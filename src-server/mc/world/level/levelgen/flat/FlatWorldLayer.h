#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct FlatWorldLayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> material;
    ::ll::TypedStorage<4, 4, int> height;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~FlatWorldLayer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
