#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

class NetworkBlockPosition : public ::BlockPos {
public:
    // prevent constructor by default
    NetworkBlockPosition& operator=(NetworkBlockPosition const&);
    NetworkBlockPosition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetworkBlockPosition(::NetworkBlockPosition const& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NetworkBlockPosition const& rhs);
    // NOLINTEND
};
