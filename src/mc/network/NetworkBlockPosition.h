#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

class NetworkBlockPosition : public ::BlockPos {
public:
    // prevent constructor by default
    NetworkBlockPosition& operator=(NetworkBlockPosition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkBlockPosition(::NetworkBlockPosition const& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NetworkBlockPosition const& rhs);
    // NOLINTEND
};
